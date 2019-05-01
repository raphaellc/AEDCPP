#include "GameObject.h"

void main() {
	int x=0, y = 0;
	GameObject * go = new GameObject[100];
	GameObject * go[100];
	GameObject* i = (GameObject *) malloc(100*sizeof(GameObject));
	for (int i = 0; i < 100; i++) {
		go[i].x = x++;
		go[i].y = y++;
		
	}
	delete go;
}