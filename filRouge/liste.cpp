#include "liste.hpp"

Liste::Liste() {}

int Liste::getCompteur() { return compteur; }

std::string toString(){
  return " ";
}



/*
TODO : 
    Proposer une méthode toString() qui renvoie dans une chaîne de caractères la
liste des rectangles et des cercles contenus dans la liste. Vous pourrez
afficher les listes une par une mais à la fin, il faudra afficher les éléments
dans l'ordre où ils sont été ajoutés.

Cette manière de stocker les objets n'est ni pratique ni efficace, le C++ nous
permet de faire bien mieux avec le modèle objet, ce que l'on fera plus tard !

    Créer une classe Point qui a pour propriété une abscisse x et une ordonnée y
    Créer une classe Forme qui a pour propriété un point, une largeur w et une
hauteur h Ajouter un attribut de classe nbFormes qui est incrémenté à chaque
fois qu'un objet Forme est construit. Vérifier bien entendu que l'instanciation
d'une forme se passe bien et est cohérente avec l'attribut de classe.

*/
