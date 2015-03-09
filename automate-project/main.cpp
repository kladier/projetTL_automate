﻿/*! \mainpage Documentation du logiciel Autoroute
 *
 * \section intro_sec Introduction
 *
 * En allant dans la section Classes, vous aurait accès à la documentation de l'ensemble des classes.
 * A partir de là, vous pourrez trouvez de la doc concernant les attributs et méthodes des classes.
 *
 * Dans cette page principale, nous verrons comment exécuter le logiciel Autoroute, prendre en main les sources,
 * l'arborescence du projet ainsi que des définitions relatives à la théorie des langages et aux automates.
 *
 * \section install_sec Installation du logiciel pour les utilisateurs
 *
 *
 *
 * \section dev_sec Pour les développeurs
 *
 * \subsection etape1 Etape 1 : Prise en main des sources et execution
 * Ce logiciel est développé en C++, avec le framework QT5.
 * La manière la plus simple d'accéder aux sources, d'exécuter le programme et de modifier ce logiciel est la suivante :
 *      - installer QT
 *      - créer un dossier dans lequel vous mettrez les 3 dossiers (executable, doc et automate-project)
 *      - dans QT, cliquez sur Open a project puis allez chercher le fichier automate-project/autoroute.pro
 *      - pour lancer le logiciel, cliquez simplement sur la flèche verte
 *
 * Il vous faudra peut-être configurer dans l'onglet "Projects" l'exécution.
 * Il suffit normalement de préciser le dossier automate/project et d'utiliser les paramètres par défaut.
 *
 *
 * NB : Vous aurez peut-être un problème de version si vous avez une version supérieure à QT5.
 * Il suffit en général de modifier le nom des bibliothèques.
 * Si cela ne change pas, il vous reste plusieurs solutions :
 *      - aller voir sur le net comment passer le projet de QT5 à la version actuelle de QT
 *      - résoudre les erreurs de compilation (aidez vous du debugger de QT), c'est la solution conseillée.
 *
 *
 * \subsection etape2 Etape 2 : Arborescence du projet
 *
 *      - doc/ : vous trouverez ici deux dossiers (html et latex) correspondant à deux formats de la documentation. Il y aussi dans ce dossier les comptes rendus 2010 et 2015.
 Il est possible d'ouvrir ce fichier avec Doxygen et de générer la documentation du programme si vous voulez la modifier.
 Ce tutoriel est assez bien fait pour prendre en main doxygen : http://franckh.developpez.com/tutoriels/outils/doxygen/
 *
 *
 *      - automate-project/ : les sources du programme.
  Mieux vaux ne pas y toucher au début, surtout si l'on ne connait pas QT et modifier le code seulement via QT.
 *
 *      - executable/ : tout les fichiers relatifs aux exécutables
 *
 *
 *
 *
 *
 *  \section definitions Définitions
 *
 * \subsection minimisation Minimisation d'un automate
 * \subsection standardisation Standardisation d'un automate
 * \subsection produit Produit de deux automates
 * \subsection determinisation Déterminisation de deux automates
 */



#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
