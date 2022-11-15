#include <iostream>
using namespace std;

int main()

{

    bool exit = false;

    char YesNo;

    while (!exit)

    {

        int n;

        cout << "NAME : MANPREET SINGH\n";
        cout << "UID : 21BCS2251 \n";

        cout << " \n \n1.Insert a new element at end as well as at a given position \n";

        cout << "2. Delete an element from a given whose value is given or whose position is given. \n";
        cout << "3. To find the location of a given element. \n";
        cout << "4. To display the elements of the linear array. \n \n";
        cout << "Select between 1 to 4 : ";

        cin >> n;

        if (n == 1)

        {

            int ch;

            cout << " \n Type 0 for inserting element at the end \n";

            cout << "Type 1 for inserting element at specific position \n \n";
            cin >> ch;

            if (ch == 0)

            {
                int size;
                int position, num, I;
                cout << "Enter number of elements>> " << endl;
                cin >> size;
                int a[size];

                cout << "Enter the elements in the array>>" << endl;

                for (int k = 0; k < size; k++)

                {

                    cin >> a[k];
                }

                cout << "Enter the element to insert>> ";

                cin >> num;

                int l = size;
                a[l] = num;
                cout << "The new array is >>" << endl;
                for (int j = 0; j < size + 1; j++)

                {

                    cout << a[j] << " ";
                }
            }

            else if (ch == 1)

            {
                int size;
                int position, number, i;

                cout << "Enter number of elements>> " << endl;
                cin >> size;
                int a[size];

                cout << "Enter the elements in the array>> " << endl;

                for (int k = 0; k < size; k++)

                {

                    cin >> a[k];
                }

                cout << "Enter the element to insert >> ";

                cin >> number;

                cout << "Enter the position at which you want to insert the new element - ";
                cin >> position;

                if (position > size + 1)

                {

                    cout << "Insertion is not possible";
                }

                else

                {

                    for (i = size; i >= position; i--)

                    {
                        a[i] = a[i - 1];
                    }

                    a[i] = number;
                }

                cout << "The new array is >> " << endl;
                for (int j = 0; j < size + 1; j++)

                {

                    cout << a[j] << " ";
                }
            }

            else

            {

                cout << "Invalid Input";
            }
        }

        else if (n == 2)

        {
            int size;
            int position, number, I;
            cout << "Enter number of elements>>" << endl;

            cin >> size;
            int a[size];

            cout << "Enter the elements in the array>>" << endl;

            for (int k = 0; k < size; k++)

            {

                cin >> a[k];
            }

            cout << "Enter the position – ";
            cin >> position;
            if (position >= size + 1)

            {

                cout << "Deletion not possible ! " << endl;
            }

            else

            {

                for (int c = position - 1; c <= size - 1; c++)

                {

                    a[c] = a[c + 1];
                }
            }

            cout << "The new array is>> " << endl;
            for (int k = 0; k < size - 1; k++)

            {

                cout << a[k] << " ";
            }
        }

        else if (n == 3)

        {
            int size;
            int position, number, I;

            cout << "Enter number of elements – " << endl;

            cin >> size;
            int a[size], fact = 0;

            cout << "Enter the elements in the array – " << endl;

            for (int k = 0; k < size; k++)

            {

                cin >> a[k];
            }

            cout << "Enter the number you want to search – ";
            cin >> number;

            for (int i = 0; i < size; i++)

            {

                if (number == a[i])

                {

                    fact = 1;

                    position = I + 1;
                }
            }
            if (fact == 1)

            {

                cout << "The number is found ! " << endl;

                cout << "It is at the position : " << position << endl;
            }

            else

            {

                cout << "Sorry the number is not in the array" << endl;
            }
        }

        else if (n == 4)

        {
            int size;
            int position, number, I;

            cout << "Enter number of elements – " << endl;

            cin >> size;
            int a[size], fact = 0;

            cout << "Enter the elements in the array – " << endl;

            for (int k = 0; k < size; k++)

            {

                cin >> a[k];
            }

            cout << "The new array is – " << endl;

            for (int k = 0; k < size; k++)

            {

                cout << a[k] << " ";
            }
        }

        else

        {

            cout << "Invalid Number";
        }

        cout << "\n \n Do you want to continue ? (Y or N) \n";
        cin >> YesNo;

        if (YesNo == 'N' || YesNo == 'n')

        {

            exit = true;
        }
    }

    system("pause");

    return 0;
}