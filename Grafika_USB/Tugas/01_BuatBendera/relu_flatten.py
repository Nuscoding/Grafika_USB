# Input image
image = [
    [-3, -2, -1, 4, 5],
    [4, -3, 2, 0, 1],
    [-3, 3, 0, 2, 1],
    [1, 0, 2, -3, -4],
    [0, 1, -4, -1, 2]
]

# Function to apply ReLU activation
def relu(x):
    return max(0, x)

# Apply ReLU activation to each element in the image
relu_matrix = [
    [relu(x) for x in row] for row in image
]

# Function to flatten a 2D list
def flatten(image):
    flattened = []
    for row in image:
        for element in row:
            flattened.append(element)
    return flattened

# Flatten the ReLU-processed image
flattened_matrix = flatten(relu_matrix)

print("Matriks setelah ReLU:")
for row in relu_matrix:
    print(row)

print("\n")

print("Matriks setelah flattening:")
print(flattened_matrix)
