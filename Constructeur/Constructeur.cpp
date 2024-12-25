// Classes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


class Personnage
{
public:

    // constructeur de copie par defaut sinon
    Personnage(Personnage& P) // constructeur de copie personnaliser
    {
        m_pdv = P.m_pdv;
        m_vitessedep = P.m_vitessedep;
        m_level = P.m_level;
        m_x = P.m_x;
        m_y = P.m_y;
        std::cout << "constructeur de copie" << std::endl;
    }

    Personnage() { std::cout << "constructeur par defaut" << std::endl; }; //constructeur par defaut


    Personnage(unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL, unsigned int X, unsigned int Y) : m_pdv(PDV), m_vitessedep(VITESSE), m_level(LEVEL), m_x(X), m_y(Y) // constructeur personalisé
    {
        /*m_pdv = PDV;
        m_vitessedep = VITESSE;
        m_level = LEVEL;
        m_x = X;
        m_y = Y;*/
        // liste d'initialisation



        std::cout << "constructeur personaliser" << std::endl;
    }

    unsigned int m_pdv, m_vitessedep, m_level;
    unsigned int m_x, m_y;

  


    void seDeplacer(unsigned int x, unsigned int y)
    {
        m_x += x;
        m_y += y;
    }

    void incrementlvl(unsigned int x, unsigned int y)
    {
        m_level++;
    }


};




int main()
{

    Personnage joueur1(100,10,1,12,14);
    Personnage joueur2(joueur1);
 
    
    return 0;
}

