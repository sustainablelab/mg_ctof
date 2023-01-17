/* *************Copy build to ~/.local/bin/ ***************
 * Copy mg_ctof.exe /usr/bin
 * Now I can run this helpful little calc utility anywhere.
 * *******************************/
#include <iostream>

float CtoF(float c)
{
    /* *************DOC***************
     * Return the temperature in Fahrenheit
     * c : temperature in Celsius
     *
     * Example:
     * float t;
     * t = 75; // °C
     * printf("C:%f F:%f\n", t, CtoF(t));
     * *******************************/
    return (c*9/5.0)+32;
}

int main(int argc, char *argv[])
{
    using namespace std;
    /* for(int i=0; i<argc; i++) cout<<argv[i]<<endl; */
    if (argc == 1)
    {
        cout<<"Expecting one or more args for Celsius temperature" << endl;
        cout<<"Example: mg_ctof 0 9 45"<<endl;
    }
    if (argc > 1)
    {
        for(int i=1; i<argc; i++)
            cout<<argv[i]<<"°F is "<<CtoF(stof(argv[i]))<<"°C"<<endl;
    }
    return 0;
}
