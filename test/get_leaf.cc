#include <iostream>
#include <iomanip>
#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i;
	BTree<int> btree (0);

	for (i = 2; i < 0x100000; i++)
		btree.add_branch (i, i * 2);
	std::cout << "leaf = "
		<< btree.get_leaf (0xfffff)->leaf
		<< std::endl;

	return 0;
}
