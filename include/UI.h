#pragma once

#include "../include/unordered_table.h"

#include "../include/R_B_tree.h"

#include "../include/hash.h"




void HASH_TABLE(Hash<polinom> a)
{
	cout << endl << endl << "     [�����!] :  � ������� ����� ��������� �������� 99 ���������. ��� ��� �������� � ����� �������� �������, �� ����� ������� ����������. ";

	bool flg = true;

	show_how_1();

	cout << endl << endl << endl << endl;
	system("pause");
	cout << endl;

	int how_2 = 1;




	while (flg)
	{

		system("cls");





		cout << endl << endl << "       [���� �������]" << endl;
		cout << " (1) �������� ������� � �������" << endl;
		cout << " (2) �������� �������" << endl;
		cout << " (3) ����� �������� �� �����" << endl;
		cout << " (4) �������� ������� ��������" << endl;
		cout << " (5) �������� � ����������" << endl;
		cout << " (6) ���������� � ���������" << endl;
		cout << " (7) ������� �������" << endl;
		cout << endl;
		cout << " (0) ��������� ���������" << endl;
		cout << endl;
		cout << " �����: ";

		int choice = -1;
		cin >> choice;

		if (choice == 0) flg = 0;

		else if (choice == 1)
		{
			system("cls");

			a.input();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
		}

		else if (choice == 2)
		{
			system("cls");

			a.show();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
		}

		else if (choice == 3)
		{
			string key_3;
			system("cls");


			cout << "����� �������� �� �����:" << endl << endl;
			cout << "������� ����:   ";
			cin >> key_3;

			if (key_3 != "no!")
			{
				int truth3 = a.find(key_3);
				cout << endl << endl;
				if (truth3 != -1)
				{
					show_polinom(a.vec[truth3].second);
				}
				else
				{
					cout << " ������� ����� � ������� ���";
				}
			}
			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
		}

		else if (choice == 4)
		{
			system("cls");

			string s_key1;
			string s_key2;
			polinom templ;
			a.show();

			cout << endl << endl << "����� �������� ������� ��� �������� �� ������� ( A <-> B ) ������� �� �����." << endl << endl;

			while (true)
			{
				cout << endl << "���� A:   ";
				cin >> s_key1;

				if (a.find(s_key1) >= 0) break;
			}

			while (true)
			{
				cout << endl << "���� B:   ";
				cin >> s_key2;

				if (a.find(s_key2) >= 0) break;
			}

			templ = a.vec[a.find(s_key1)].second;
			a.vec[a.find(s_key1)].second = a.vec[a.find(s_key2)].second;
			a.vec[a.find(s_key2)].second = templ;



			cout << endl << endl << "���������:" << endl << endl;;
			cout << "1] ����: " << s_key1 << "  "; show_polinom(a.vec[a.find(s_key1)].second);
			cout << "2] ����: " << s_key2 << "  "; show_polinom(a.vec[a.find(s_key2)].second);



			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
		}


		else if (choice == 5)
		{
			bool flg2 = true;
			while (flg2)
			{



				if (how_2)
				{
					show_how_2();
					how_2--;

					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				cout << endl << endl << "       [���� ��������]" << endl;
				cout << endl;
				cout << " (1) �������� �������" << endl;
				cout << endl;
				cout << " (2) �������� ���������" << endl;
				cout << " (3) �������� ���������" << endl;
				cout << " (4) ��������� ���������" << endl;
				cout << " (5) ��������� �� �����" << endl;
				cout << " (6) ��������� �������" << endl;
				cout << endl;
				cout << " (0) ��������� � ���� �������" << endl;
				cout << endl;
				cout << " �����: ";

				int polinom_choice = -1;
				cin >> polinom_choice;



				if (polinom_choice == 0) flg2 = false;

				if (polinom_choice == 1)
				{
					system("cls");
					a.show();
				}


				else if (polinom_choice == 2)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B + C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (a.find(my_key1) >= 0) break;

						if (a.find(my_key1) == -1)
						{
							polinom PPP;
							a.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (a.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (a.find(my_key3) >= 0) break;
					}



					a.vec[a.find(my_key1)].second = a.vec[a.find(my_key2)].second + a.vec[a.find(my_key3)].second;    // A = B + C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(a.vec[a.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 3)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B - C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (a.find(my_key1) >= 0) break;

						if (a.find(my_key1) == -1)
						{
							polinom PPP;
							a.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (a.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (a.find(my_key3) >= 0) break;
					}



					a.vec[a.find(my_key1)].second = a.vec[a.find(my_key2)].second - a.vec[a.find(my_key3)].second;    // A = B - C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(a.vec[a.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 4)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " ��������� ���������:" << endl << endl;
					cout << " A = B * C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (a.find(my_key1) >= 0) break;

						if (a.find(my_key1) == -1)
						{
							polinom PPP;
							a.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (a.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (a.find(my_key3) >= 0) break;
					}



					a.vec[a.find(my_key1)].second = a.vec[a.find(my_key2)].second * a.vec[a.find(my_key3)].second;    // A = B * C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(a.vec[a.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 5)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;


					cout << " ��������� �� �����:" << endl << endl;
					cout << " A = B * var" << endl;
					cout << "������� ����� ��������� A,B    � ����� ����� var" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (a.find(my_key1) >= 0) break;

						if (a.find(my_key1) == -1)
						{
							polinom PPP;
							a.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (a.find(my_key2) >= 0) break;
					}

					double var = 0;
					cout << endl << "����� var:";
					cin >> var;



					a.vec[a.find(my_key1)].second = a.vec[a.find(my_key2)].second * var;    // A = B * var

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(a.vec[a.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 6)
				{
					cout << endl << endl << endl;
					cout << " �������� �������:" << endl << endl;
					string key_var;
					while (true)
					{
						cout << endl << "����:   ";
						cin >> key_var;

						if (a.find(key_var) >= 0) break;
					}

					calculate(a.vec[a.find(key_var)].second);

					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}


			}







		}

		else if (choice == 6)
		{
			system("cls");

			//cout << endl << endl << "���������� ��������, ����������� ��� ������ � ����������: " << all_collision << endl;
			//cout << endl << "���������� ����������� ��������� �� �������: " << end_collision;





			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;

		}

		else if (choice == 7)
		{
			system("cls");

			a.delete_table();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
		}
	}



}


void UNORDERED_TABLE(unordered_table<polinom> un)
{



	bool flg_un = true;
	int choice_un;

	while (flg_un)
	{




		cout << endl << endl << "       [���� �������]" << endl;
		cout << " (1) �������� ������� � �������" << endl;
		cout << " (2) �������� �������" << endl;
		cout << " (3) ����� �������� �� �����" << endl;
		cout << " (4) �������� ������� ��������" << endl;
		cout << " (5) �������� � ����������" << endl;
		cout << " (6) ������� �������" << endl;
		cout << endl;
		cout << " (0) ��������� ���������" << endl;
		cout << endl;
		cout << " �����: ";

		cin >> choice_un;

		system("cls");

		if (choice_un == 0) break;


		if (choice_un == 1)
		{
			un.input();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;

			system("cls");
		}


		if (choice_un == 2)
		{
			un.show();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;

			system("cls");
		}

		else if (choice_un == 3)
		{
			string key_3;
			system("cls");


			cout << "����� �������� �� �����:" << endl << endl;
			cout << "������� ����:   ";
			cin >> key_3;

			if (key_3 != "no!")
			{
				int truth3 = un.find(key_3);
				cout << endl << endl;
				if (truth3 != -1)
				{
					show_polinom(un.vec[truth3].second);
				}
				else
				{
					cout << " ������� ����� � ������� ���";
				}
			}
			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
		}

		else if (choice_un == 4)
		{
			system("cls");

			string s_key1;
			string s_key2;
			polinom templ;
			un.show();

			cout << endl << endl << "����� �������� ������� ��� �������� �� ������� ( A <-> B ) ������� �� �����." << endl << endl;

			while (true)
			{
				cout << endl << "���� A:   ";
				cin >> s_key1;

				if (un.find(s_key1) >= 0) break;
			}

			while (true)
			{
				cout << endl << "���� B:   ";
				cin >> s_key2;

				if (un.find(s_key2) >= 0) break;
			}

			templ = un.vec[un.find(s_key1)].second;
			un.vec[un.find(s_key1)].second = un.vec[un.find(s_key2)].second;
			un.vec[un.find(s_key2)].second = templ;



			cout << endl << endl << "���������:" << endl << endl;;
			cout << "1] ����: " << s_key1 << "  "; show_polinom(un.vec[un.find(s_key1)].second);
			cout << "2] ����: " << s_key2 << "  "; show_polinom(un.vec[un.find(s_key2)].second);



			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
		}




		//-----------------------------------------------------------------------------------------------------------------------------------

		else if (choice_un == 5)
		{
			bool flg2 = true;
			while (flg2)
			{








				cout << endl << endl << "       [���� ��������]" << endl;
				cout << endl;
				cout << " (1) �������� �������" << endl;
				cout << endl;
				cout << " (2) �������� ���������" << endl;
				cout << " (3) �������� ���������" << endl;
				cout << " (4) ��������� ���������" << endl;
				cout << " (5) ��������� �� �����" << endl;
				cout << " (6) ��������� �������" << endl;
				cout << endl;
				cout << " (0) ��������� � ���� �������" << endl;
				cout << endl;
				cout << " �����: ";

				int polinom_choice = -1;
				cin >> polinom_choice;



				if (polinom_choice == 0) flg2 = false;

				if (polinom_choice == 1)
				{
					system("cls");
					un.show();
				}


				else if (polinom_choice == 2)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B + C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (un.find(my_key1) >= 0) break;

						if (un.find(my_key1) == -1)
						{
							polinom PPP;
							un.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (un.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (un.find(my_key3) >= 0) break;
					}



					un.vec[un.find(my_key1)].second = un.vec[un.find(my_key2)].second + un.vec[un.find(my_key3)].second;    // A = B + C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(un.vec[un.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 3)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B - C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (un.find(my_key1) >= 0) break;

						if (un.find(my_key1) == -1)
						{
							polinom PPP;
							un.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (un.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (un.find(my_key3) >= 0) break;
					}



					un.vec[un.find(my_key1)].second = un.vec[un.find(my_key2)].second - un.vec[un.find(my_key3)].second;    // A = B - C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(un.vec[un.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 4)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " ��������� ���������:" << endl << endl;
					cout << " A = B * C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (un.find(my_key1) >= 0) break;

						if (un.find(my_key1) == -1)
						{
							polinom PPP;
							un.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (un.find(my_key2) >= 0) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (un.find(my_key3) >= 0) break;
					}



					un.vec[un.find(my_key1)].second = un.vec[un.find(my_key2)].second * un.vec[un.find(my_key3)].second;    // A = B * C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(un.vec[un.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 5)
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;


					cout << " ��������� �� �����:" << endl << endl;
					cout << " A = B * var" << endl;
					cout << "������� ����� ��������� A,B    � ����� ����� var" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (un.find(my_key1) >= 0) break;

						if (un.find(my_key1) == -1)
						{
							polinom PPP;
							un.insert(my_key1, PPP);
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (un.find(my_key2) >= 0) break;
					}

					double var = 0;
					cout << endl << "����� var:";
					cin >> var;



					un.vec[un.find(my_key1)].second = un.vec[un.find(my_key2)].second * var;    // A = B * var

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(un.vec[un.find(my_key1)].second);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 6)
				{
					cout << endl << endl << endl;
					cout << " �������� �������:" << endl << endl;
					string key_var;
					while (true)
					{
						cout << endl << "����:   ";
						cin >> key_var;

						if (un.find(key_var) >= 0) break;
					}

					calculate(un.vec[un.find(key_var)].second);

					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}


			}







		}





		//-----------------------------------------------------------------------------------------------------------------------------------







		else if (choice_un == 6)
		{
			system("cls");

			un.delete_table();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
		}










	}


}


void RED_BLACK_TREE(R_B_Tree<polinom> rb)
{
	bool flg_un = true;
	int choice_un;

	while (flg_un)
	{




		cout << endl << endl << "       [���� �������]" << endl;
		cout << " (1) �������� ������� � �������" << endl;
		cout << " (2) ����� �������� �� �����" << endl;
		cout << " (3) �������� ������� ��������" << endl;
		cout << " (4) �������� � ����������" << endl;
		cout << " (5) ������� �������" << endl;
		cout << endl;
		cout << " (0) ��������� ���������" << endl;
		cout << endl;
		cout << " �����: ";

		cin >> choice_un;

		system("cls");

		if (choice_un == 0) break;


		if (choice_un == 1) //�������� ������� � �������
		{
			rb.input();

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;

			system("cls");
		}




		else if (choice_un == 2) //����� �������� �� �����
		{
			string key_3;
			system("cls");


			cout << "����� �������� �� �����:" << endl << endl;
			cout << "������� ����:   ";
			cin >> key_3;

			if (key_3 != "no!")
			{
				cout << endl << endl;
				if (rb.find(key_3))
				{
					cout << "����: " << rb.find(key_3)->key << endl;   // ����� ��������, ��� ���
					show_polinom(rb.find(key_3)->data);
					cout << endl << "���� �������� � ������: " << rb.show_colour(rb.find(key_3)->colour);
				}
				else
				{
					cout << " ������� ����� � ������� ���";
				}
			}
			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
		}



		else if (choice_un == 3) //�������� ������� ��������
		{
			system("cls");

			string s_key1;
			string s_key2;
			polinom templ;

			if (rb.Root == rb.nil)
			{
				cout << " ������ ����� � �� �� ������ ���� ������ � �� ��������";
				cout << endl << endl << endl << endl;
				system("pause");
				cout << endl;
				system("cls");
			}
			else
			{ 
			cout << endl << endl << "����� �������� ������� ��� �������� �� ������� ( A <-> B ) ������� �� �����." << endl << endl;
			cout << "� ������� ������, �� ������ ������ no! .��� �������� ������ � �������. �� ����������, �������� ������ ��������� �� ����� ���������� ";
			while (true)
			{
				cout << endl << "���� A:   ";
				cin >> s_key1;
				if (s_key1 == "no!") return;
				if (rb.find(s_key1)) break;
			}

			while (true)
			{
				cout << endl << "���� B:   ";
				cin >> s_key2;
				if (s_key1 == "no!") return;

				if (rb.find(s_key2)) break;
			}
			templ = rb.find(s_key1)->data;
			rb.find(s_key1)->data = rb.find(s_key2)->data;
			rb.find(s_key2)->data = templ;


			cout << endl << endl << "���������:" << endl << endl;;
			cout << "1] ����: " << s_key1 << "  "; show_polinom(rb.find(s_key1)->data);
			cout << "2] ����: " << s_key2 << "  "; show_polinom(rb.find(s_key2)->data);



			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
			}
		}




		//-----------------------------------------------------------------------------------------------------------------------------------

		else if (choice_un == 4) // �������� � ����������
		{
			bool flg2 = true;
			while (flg2)
			{








				cout << endl << endl << "       [���� ��������]" << endl;
				cout << endl;
				cout << " (1) �������� ���������" << endl;
				cout << " (2) �������� ���������" << endl;
				cout << " (3) ��������� ���������" << endl;
				cout << " (4) ��������� �� �����" << endl;
				cout << " (5) ��������� �������" << endl;
				cout << endl;
				cout << " (0) ��������� � ���� �������" << endl;
				cout << endl;
				cout << " �����: ";

				int polinom_choice = -1;
				cin >> polinom_choice;



				if (polinom_choice == 0) flg2 = false;


				else if (polinom_choice == 1) //�������� ���������
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B + C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (rb.find(my_key1)) break;

						else
						{
							polinom PPP;
							rb.insert(my_key1, PPP);     // ��� ����� ������ !!!
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (rb.find(my_key2)) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (rb.find(my_key3)) break;
					}



					rb.find(my_key1)->data = rb.find(my_key2)->data + rb.find(my_key3)->data;    // A = B + C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(rb.find(my_key1)->data);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 2) //�������� ���������
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " �������� ���������:" << endl << endl;
					cout << " A = B - C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (rb.find(my_key1)) break;

						else
						{
							polinom PPP;
							rb.insert(my_key1, PPP);     // ��� ����� ������ !!!
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (rb.find(my_key2)) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (rb.find(my_key3)) break;
					}



					rb.find(my_key1)->data = rb.find(my_key2)->data - rb.find(my_key3)->data;    // A = B - C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(rb.find(my_key1)->data);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 3) //��������� ���������
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;
					string my_key3;


					cout << " ��������� ���������:" << endl << endl;
					cout << " A = B * C" << endl;
					cout << "������� ����� ��������� A,B,C" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (rb.find(my_key1)) break;

						else
						{
							polinom PPP;
							rb.insert(my_key1, PPP);     // ��� ����� ������ !!!
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (rb.find(my_key2)) break;
					}

					while (true)
					{
						cout << endl << "���� C:   ";
						cin >> my_key3;

						if (rb.find(my_key3)) break;
					}



					rb.find(my_key1)->data = rb.find(my_key2)->data * rb.find(my_key3)->data;    // A = B * C

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(rb.find(my_key1)->data);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 4) //��������� �� �����
				{
					cout << endl << endl << endl;

					string my_key1;
					string my_key2;


					cout << " ��������� �� �����:" << endl << endl;
					cout << " A = B * var" << endl;
					cout << "������� ����� ��������� A,B    � ����� ����� var" << endl;

					while (true)
					{
						cout << endl << "���� A:   " << endl;
						cin >> my_key1;

						if (rb.find(my_key1)) break;

						else
						{
							polinom PPP;
							rb.insert(my_key1, PPP);     // ��� ����� ������ !!!
							break;
						}

					}

					while (true)
					{
						cout << endl << "���� B:   ";
						cin >> my_key2;

						if (rb.find(my_key2)) break;
					}

					double var = 0;
					cout << endl << "����� var:";
					cin >> var;



					rb.find(my_key1)->data = rb.find(my_key2)->data * var;    // A = B * var

					cout << endl << endl << "���������:" << endl;
					cout << " ����: " << my_key1 << "  ";
					show_polinom(rb.find(my_key1)->data);


					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}




				else if (polinom_choice == 5) //��������� �������
				{
					cout << endl << endl << endl;
					cout << " �������� �������:" << endl << endl;
					string key_var;
					while (true)
					{
						cout << endl << "����:   ";
						cin >> key_var;

						if (rb.find(key_var)) break;
					}

					calculate(rb.find(key_var)->data);

					cout << endl << endl << endl << endl;
					system("pause");
					cout << endl;

					system("cls");
				}


			}







		}





		//-----------------------------------------------------------------------------------------------------------------------------------







		else if (choice_un == 5) //������� �������
		{
			system("cls");
			string my_key2;
			while (true)
			{
				cout << endl << "����:   ";
				cin >> my_key2;

				if (rb.find(my_key2)) break;
			}
			rb.remove(my_key2);

			cout << endl << endl << endl << endl;
			system("pause");
			cout << endl;
			system("cls");
		}










	}

}


void ALL_IN_ONE()
{
	cout << endl << endl << endl;
	cout << "����� �������� ����� ����������� ��� ���� ������ �����" << endl << endl;
	cout << "����� ���������� ����� ������������, � ����� ��� ����� ���������� ������������ � �������� ��� ���� ��������� ��������:" << endl << endl;

	
	
	cout << "����:  n                �������:   14                                " << endl;
	cout << "����:  c                �������:   3                                 " << endl;
	cout << "����:  m                �������:   13                                " << endl;
	cout << "����:  g                �������:   7                                 " << endl;
	cout << "����:  h                �������:   8                                 " << endl;
	cout << "����:  o                �������:   15                                " << endl;
	cout << "����:  j                �������:   10                                " << endl;
	cout << "����:  d                �������:   4                                 " << endl;
	cout << "����:  l                �������:   12                                " << endl;
	cout << "����:  b                �������:   2                                 " << endl;
	cout << "����:  e                �������:   5                                 " << endl;
	cout << "����:  k                �������:   11                                " << endl;
	cout << "����:  a                �������:   1                                 " << endl;
	cout << "����:  f                �������:   6                                 " << endl;
	cout << "����:  i                �������:   9                                 " << endl;
	
	unordered_table<polinom> UN_all(50);
	R_B_Tree<polinom> RB_all;
	Hash<polinom> H_all;
	polinom t;


//==========================

//==========================

	t.push(14, 0);
	RB_all.insert("n", t);
	H_all.insert("n", t);
	UN_all.insert("n", t);
	t.clear();

	t.push(3, 0);
	RB_all.insert("c", t);
	H_all.insert("c", t);
	UN_all.insert("c", t);
	t.clear();

	t.push(13, 0);
	RB_all.insert("m", t);
	H_all.insert("m", t);
	UN_all.insert("m", t);
	t.clear();

	t.push(7, 0);
	RB_all.insert("g", t);
	H_all.insert("g", t);
	UN_all.insert("g", t);
	t.clear();

	t.push(8, 0);
	RB_all.insert("h", t);
	H_all.insert("h", t);
	UN_all.insert("h", t);
	t.clear();

	t.push(15, 0);
	RB_all.insert("o", t);
	H_all.insert("o", t);
	UN_all.insert("o", t);
	t.clear();

	t.push(10, 0);
	RB_all.insert("j", t);
	H_all.insert("j", t);
	UN_all.insert("j", t);
	t.clear();

	t.push(4, 0);
	RB_all.insert("d", t);
	H_all.insert("d", t);
	UN_all.insert("d", t);
	t.clear();

	t.push(12, 0);
	RB_all.insert("l", t);
	H_all.insert("l", t);
	UN_all.insert("l", t);
	t.clear();

	t.push(2, 0);
	RB_all.insert("b", t);
	H_all.insert("b", t);
	UN_all.insert("b", t);
	t.clear();

	t.push(5, 0);
	RB_all.insert("e", t);
	H_all.insert("e", t);
	UN_all.insert("e", t);
	t.clear();

	t.push(11, 0);
	RB_all.insert("k", t);
	H_all.insert("k", t);
	UN_all.insert("k", t);
	t.clear();

	t.push(1, 0);
	RB_all.insert("a", t);
	H_all.insert("a", t);
	UN_all.insert("a", t);
	t.clear();

	t.push(6, 0);
	RB_all.insert("f", t);
	H_all.insert("f", t);
	UN_all.insert("f", t);
	t.clear();

	t.push(9, 0);
	RB_all.insert("i", t);
	H_all.insert("i", t);
	UN_all.insert("i", t);
	t.clear();


//==========================

//==========================

	cout << endl << endl << "��� ���������� ������� ������������. ��� ����� �� ����� ��������, ���������� �� ������ �������." << endl;
	cout << "���� ������ ������ �������, ����������� �������(2).������� ���������� ������� ��������� �����" << endl << endl;
	while (true)
	{
		cout<<endl<<endl << "  __����__" << endl;
		cout << "1) ���� ��������" << endl;
		cout << "2) ����� ��������" << endl;
		cout << "3)�������� ��������" << endl;

		cout << endl << "4) �������� ������� (�� ��� �������)" << endl;

		cout << endl << "0) �����";
		int choice = -1;
		cout << endl << endl << endl << endl << "�����:";
		cin >> choice;

		if (choice == 0)
		{
			system("cls");
			break;
		}



		if (choice == 1)
		{
			cout << endl << "���� ��������:" << endl << endl;

			cout << "������� ���������� ������� � ��������:  ";
			int n = amount_of_monoms();

			polinom A = create_polinom(n);

			cout << endl << endl;
			show_polinom(A);

			cout << endl << endl;

			cout << " ���������� ���� ���������� ���� ��� ������� �������� (������ ������ - ��������� ��������� �����). ";
			cout << endl << " ���� �����: ";
			string tmp;
			cin >> tmp;


			RB_all.insert(tmp, A);
			H_all.insert(tmp, A);
			UN_all.insert(tmp, A);
			A.clear();

			cout << endl << endl<<" ������������: "<<endl;
			cout <<endl<< " ��������������� ������:  " << UN_all.get_numbers();
			cout << endl << " ���-�������:  " << H_all.get_numbers();
			cout << endl << " ������ ������ ������:  " << RB_all.get_numbers();
		}

		if (choice == 2)
		{
			string main_key;
			while (true)
			{
			cout << endl << "���� �����: ";
			cin >> main_key;

			if (RB_all.find(main_key)) break;

			cout << endl << "���� �� ������" << endl;
			cout << endl << endl << "1) � ��� � �����" << endl;
			cout << "2)�������� ����" << endl << endl << "�����: ";
			int nnn;
			cin >> nnn;
			if (nnn = 1)break;
			}

			RB_all.find(main_key);
			H_all.find(main_key);
			UN_all.find(main_key);

			cout << endl << endl << " ������������: " << endl;
			cout << endl << " ��������������� ������:  " << UN_all.get_numbers();
			cout << endl << " ���-�������:  " << H_all.get_numbers();
			cout << endl << " ������ ������ ������:  " << RB_all.get_numbers();

		}

		if (choice == 3)
		{
			string key2;
			while (true)
			{


				cout << endl << "���� �����: ";
				cin >> key2;

				if (RB_all.find(key2)) break;

				cout << endl << "���� �� ������" << endl;
			}


			RB_all.remove(key2);
			H_all.find(key2);
			UN_all.find(key2);


			cout << endl << endl << " ������������: " << endl;
			cout << endl << " ��������������� ������:  " << UN_all.get_numbers();
			cout << endl << " ���-�������:  " << H_all.get_numbers();
			cout << endl << " ������ ������ ������:  " << RB_all.get_numbers();
		}



		if (choice == 4)
		{
			if (RB_all.find("n"))
			{
				cout << "����:  n                �������:   14                                " << endl;

			}
			if (RB_all.find("c"))
			{
				cout << "����:  c                �������:   3                                 " << endl;

			}
			if (RB_all.find("m"))
			{
				cout << "����:  m                �������:   13                                " << endl;

			}
			if (RB_all.find("g"))
			{
				cout << "����:  g                �������:   7                                 " << endl;

			}
			if (RB_all.find("h"))
			{
				cout << "����:  h                �������:   8                                 " << endl;
			}
			if (RB_all.find("o"))
			{
				cout << "����:  o                �������:   15                                " << endl;

			}
			if (RB_all.find("j"))
			{
				
				cout << "����:  j                �������:   10                                " << endl;
				
			}
			if (RB_all.find("d"))
			{
				cout << "����:  d                �������:   4                                 " << endl;
				
			}
			if (RB_all.find("l"))
			{
				cout << "����:  l                �������:   12                                " << endl;
				
			}
			if (RB_all.find("b"))
			{
				cout << "����:  b                �������:   2                                 " << endl;
				
			}
			if (RB_all.find("e"))
			{
				cout << "����:  e                �������:   5                                 " << endl;
				
			}
			if (RB_all.find("k"))
			{
				cout << "����:  k                �������:   11                                " << endl;
				
			}
			if (RB_all.find("a"))
			{
				cout << "����:  a                �������:   1                                 " << endl;
				
			}
			if (RB_all.find("f"))
			{
				cout << "����:  f                �������:   6                                 " << endl;
				
			}
			if (RB_all.find("i"))
			{
				cout << "����:  i                �������:   9                                 " << endl;
			}

		}









	}

}















//-------------------------------------------------------


pair<string, int>* mp()
{
	pair<string, int>* m = new pair<string, int>[100];
	for (int i = 0; i < 100; i++)
	{
		m[i].first = "no!";
		m[i].second = i;
	}
	return m;
}






int find_rb(pair<string, int>* d, string key)
{
	for (int i = 0; i < 100; i++)
	{
		if (d[i].first == key) return d[i].second;
	}
	return -1;
}