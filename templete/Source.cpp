/* template <typename T> 戻り値 関数(){ ... } */
#include <iostream>
#include <conio.h>

// 変数の値を入れ替える。
template <typename T>
void tmpl_swap(T &a, T &b) {
	T temp;
	temp = a; a = b; b = temp;
}

int main() {
	int  x = 10, y = 20;
	char c = 'p', d = 'q';

	tmpl_swap(x, y); printf("%d,%d\n", x, y);
	tmpl_swap(c, d); printf("%c,%c\n", c, d);

	_getch();
	return(0);
}