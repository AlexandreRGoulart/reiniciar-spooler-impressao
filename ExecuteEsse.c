#include <Windows.h>
#include <Shellapi.h>

//programa em C que faz com que qualquer script tenha privil�gios de admnistrador 

int main()
{
    char *application = "impressora1.exe"; // substitua pelo aplicativo (script) que voc� quer executar

    ShellExecute(NULL, "runas", application, NULL, NULL, SW_SHOWDEFAULT);
}
