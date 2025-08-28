int *ptr = new int(10);
std::cout << *ptr << std::endl;
delete ptr;
std::cout << *ptr << std::endl;