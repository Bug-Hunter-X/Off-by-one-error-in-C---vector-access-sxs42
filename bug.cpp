std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}

This code will lead to undefined behavior because the loop condition `i <= vec.size()` accesses the vector beyond its bounds.  Vectors are zero-indexed, so valid indices are from 0 to `vec.size() - 1`.