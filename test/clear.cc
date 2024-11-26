#include <iostream>
#include <iomanip>
#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i;
	class BTree<int> btree (1);

	for (i = 2; i < 0x100; i++)
		btree.add_branch (i, i);
	btree.draw ();
	/*
	 * Unless you really know what you're doing, comment out the following
	 * line is highly discouraged (maybe for debugging...)
	 */ 
	// btree.clear ();

	return 0;
}
