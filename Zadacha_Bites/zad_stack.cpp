//#include<iostream>
//#include<vector>
//#include"Stacks.h"
//
//using namespace std;
//
//
//
//void menu() {
//    cout << endl << "----------------------------" << endl;
//    cout << endl << "      Main menu  " << endl;
//    cout << endl << "----------------------------" << endl;
//
//    cout << "1. Add object" << endl;
//    cout << "2. Delete object" << endl;
//    cout << "3. Info" << endl;
//    cout << "0. Exit" << endl;
//}
//
//int errorProc(int minValue, int maxValue) {
//    int place;
//    while (1) {
//        cin >> place;
//        if (place < minValue || place > maxValue) {
//            cout << "Noncorrect input, reinput -> ";
//        }
//        else
//            return place;
//    }
//
//}
//
//void addElem(Stacks& obj) {
//    cout << "Input elements: ";
//    obj.addElem(errorProc(INT32_MIN, INT32_MAX));
//}
//
//void delElem(Stacks& obj) {
//
//    try
//    {   
//        cout << "Delete object: " << obj.delElem() << endl;
//
//    }
//    catch (string err)
//    {
//        cout << err << endl;
//    }
//}
//
//int main()
//{
//    cout << "Input max size of stack: ";
//	Stacks obj(errorProc(1,INT32_MAX));
//
//
//    int step = 0;
//    int selection;
//
//    while (!step) {
//        menu();
//        cout << endl;
//        cout << "Input the case of menu-> ";
//        selection = errorProc(0, 3);
//        cout << endl;
//        switch (selection)
//        {
//        case 0:
//            step = 1;
//            break;
//
//        case 1:
//            addElem(obj);
//            break;
//
//        case 2:
//            delElem(obj);
//            break;
//
//        case 3:
//            obj.printStack();
//            break;
//
//        }
//    }
//	
//}
//	
//
//
//
