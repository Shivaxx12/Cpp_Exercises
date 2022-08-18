#include <iostream>
using namespace std;

int main()
{

    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N;
    cout << "Enter the number:";
    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        if (i == 2)
        {
            cout << 2 << endl;
        }
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            bool divided = false;
            for (int m = 2; m < i; m++)
            {
                if (i % m == 0)
                {
                    divided = true;
                    break;
                }
            }
            if (divided == false)
            {
                cout << i << endl;
            }
        }
    }
}
