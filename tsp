from itertools import permutations
def tsp(distances):
    """
    Compute the minimum distance for the Traveling Salesperson Problem.
    Args:
        distances (dict): Distance matrix between cities.
    Returns:
        int: The minimum distance.
    """
    cities = list(distances.keys())
    min_distance = float('inf')
    for perm in permutations(cities):
        distance = 0
        for i in range(len(perm) - 1):
            distance += distances[perm[i]][perm[i+1]]
        distance += distances[perm[-1]][perm[0]]  
        min_distance = min(min_distance, distance)
    return min_distance
distances = {
    'A': {'B': 10, 'C': 15, 'D': 20, 'E': 25},
    'B': {'A': 10, 'C': 35, 'D': 30, 'E': 18},
    'C': {'A': 15, 'B': 35, 'D': 25, 'E': 22},
    'D': {'A': 20, 'B': 30, 'C': 25, 'E': 12},
    'E': {'A': 25, 'B': 18, 'C': 22, 'D': 12}
}
print("Minimum distance:", tsp(distances))
