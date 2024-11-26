#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i;
	BTree<int> btree (0);

	for (i = 2; i < 0x100; i++)
		btree.add_branch (i, i * 2);
	btree.set_current (btree.get_root ());
	btree.draw ();

	return 0;
}
