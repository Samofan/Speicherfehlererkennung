int* ptr = (int*)std::malloc(sizeof(int));
std::free(ptr);
*ptr = 42;