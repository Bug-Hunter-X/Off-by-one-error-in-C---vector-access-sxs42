std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}

Alternatively, use iterators for safer and more concise code:

for (int x : vec) {
  std::cout << x << std::endl;
}

Or range-based for loop:
for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << std::endl;
}