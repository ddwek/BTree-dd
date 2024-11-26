#include "../src/BTree-dd.tcc"

int main (int argc, char **argv)
{
	int i, j = 0;
	struct example_st {
		unsigned long long id;
		float number;
	} example = { 0, 0.01 };
	BTree<struct example_st> btree (example);

	for (i = 2; i < 0x100000; i++, j++) {
		example.id = i * 2;
		example.number += 0.01;
		btree.add_branch (i, example);
	}

	return 0;
}
