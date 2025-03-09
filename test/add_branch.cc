#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i, j = 0;
	struct example_st {
		unsigned long long id;
		float number;
	} example = { 1, 0.01 };
	BTree<struct example_st> btree (example);

	for (i = 1; i < 64; i++, j++) {
		example.id = i;
		example.number += 0.01;
		btree.add_branch (i, example);
	}
	btree.draw ();

	return 0;
}
