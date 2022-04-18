#include <Windows.h>
#include <Shellapi.h>

//programa em C que faz com que qualquer script tenha privilégios de admnistrador 

int main()
{
    char *application = "impressora1.exe"; // substitua pelo aplicativo (script) que você quer executar

    ShellExecute(NULL, "runas", application, NULL, NULL, SW_SHOWDEFAULT);
}
