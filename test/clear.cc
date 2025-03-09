#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i;
	class BTree<int> btree (1);

	for (i = 2; i < 0x10; i++)
		btree.add_branch (i, i);
	btree.draw ();
	btree.clear ();

	btree.init (1);
	for (i = 2; i < 0x40; i++)
		btree.add_branch (i, i);
	btree.draw ();
	btree.clear ();

	return 0;
}
