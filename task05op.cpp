#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	
}
main()
{
	system("cls");
	gotoxy(27,20);
	
	cout<<"*      * *      * ******    *     *      *       *       *******  ******   ******  *       *"<<endl;
	gotoxy(27,21);
	cout<<"*      * * *  * * *         *    *      * *      *       *       *      * *      * * *   * *"<<endl;   
	gotoxy(27,22);
	cout<<"*      * *   *  * *         *  *       *   *     *       *       *      * *      * *   *   *"<<endl;
	gotoxy(27,23);
	cout<<"*      * *   *  * *****     * *       *******    *       ******* *      * *      * *   *   *"<<endl;
	gotoxy(27,24);
	cout<<"*      * *      * *         *   *    *       *   *             * *      * *      * *       *"<<endl;
	gotoxy(27,25);
	cout<<"*      * *      * *         *    *  *         *  *             * *      * *      * *       *"<<endl;
	gotoxy(27,26);
	cout<<"******** *      * ******    *     **           * ******* *******  ******   ******  *       *"<<endl;
	gotoxy(27,27);
	return 0;
}

