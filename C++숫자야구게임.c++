#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    
    /*
    int iNumber1[3] = {}, iNumber2[9] = {};
    int iStrike = 0, iBall = 0;

    srand((unsigned int)time(0));


    // ���� �� �Է�
    for (int i = 0; i < 9; i++)
    {
        iNumber2[i] = i+1;

    }

    // ����
    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++)
    {
        idx1 = rand() % 9;
        idx2 = rand() % 9;

        iTemp = iNumber2[idx1];
        iNumber2[idx1] = iNumber2[idx2];
        iNumber2[idx2] = iTemp;
    }
    cout << iNumber2[0] << iNumber2[1] << iNumber2[2] << endl;


    do
    {
        // �ݺ� �ÿ� �ʱⰪ
        iStrike = 0, iBall = 0;

        // ����� �� �Է�
        cout << "*\t*\t*\t" << endl;

        cout << "���ڸ� �Է��� �ּ��� : ";
        cin >> iNumber1[0] >> iNumber[1] >> iNumber[2];

        if (iNumber1[0] == 0 || iNumber1[1] == 0 || iNumber1[2] == 0)
        {
            break;
        }
        

        // �� ��
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (iNumber1[i] == iNumber2[j])
                {
                    if (iNumber1[i] == iNumber2[i])
                    {
                        iStrike++;
                    }

                    else
                    {
                        iBall++;
                    }
                }
            }
        }

        // ��� ���
        if (iStrike == 0 && iBall == 0)
        {
            cout << "Out" << endl;
        }

        else
        {
            cout << "Strike : " << iStrike << "\t " << "Ball : " << iBall << endl;
        }
    
    } while (iStrike < 3);