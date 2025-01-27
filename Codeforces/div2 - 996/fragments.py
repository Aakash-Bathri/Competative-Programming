def can_craft(n, a, b):
    # Convert lists to arrays for easier manipulation
    current = list(a)
    required = list(b)
    
    # First check if we already have enough of everything
    if all(current[i] >= required[i] for i in range(n)):
        return True
        
    # Key insight: Each operation reduces total materials by (n-2)
    # If we need more total materials than we have, it's impossible
    total_current = sum(current)
    total_required = sum(required)
    if total_current < total_required:
        return False
    
    # For each material that we need more of
    for i in range(n):
        deficit = required[i] - current[i]
        if deficit <= 0:
            continue
            
        # Check if we have enough of other materials to perform the operations
        min_others = float('inf')
        others_sum = 0
        for j in range(n):
            if j == i:
                continue
            # We need deficit operations, each costing 1 unit
            extra = current[j] - required[j]  # How much we can spare
            if extra < deficit:  # Not enough to spare
                return False
            min_others = min(min_others, extra)
            others_sum += extra
            
        # We need enough materials from others to cover all operations
        if min_others * (n-1) < deficit or others_sum < deficit * (n-1):
            return False
    
    return True

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        
        result = can_craft(n, a, b)
        print("YES" if result else "NO")

# Run the solution
if __name__ == "__main__":
    solve()