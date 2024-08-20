#include "main.h"

/*
 * main - infinity loop at the core of the simple shell
 * Return: 0 on success, exit with 0 on fail
*/
int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    while (1)
    {
        printf("$ ");  // Afficher le prompt

        nread = getline(&line, &len, stdin);  // Lire la commande entrée par l'utilisateur
        if (nread == -1)
        {
            if (feof(stdin))
            {
                free(line);
                exit(0);  // Sortie propre si l'utilisateur utilise Ctrl+D
            }
            perror("getline");
            free(line);
            exit(1);
        }

        // Pour l'instant, on affiche juste la commande pour vérification
        printf("Vous avez entré : %s", line);
        
        // On ajoutera ici le code pour traiter et exécuter la commande

    }

    free(line);
    return 0;
}
