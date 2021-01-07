#ifndef PARTIE_H
#define PARTIE_H

#include <QVector>
#include <QLabel>
#include <iostream>
#include "piece.h"
#include <vector>

namespace chest {

class partie
{
public:
    partie();
    void afficher(QLabel *label)const;
    void affichageCase(QPoint *c)const;//private ?
    void afficherCase(int i, int j, QLabel *label)const;//private ?
    std::vector<std::vector<std::unique_ptr<chest::piece>>>&getPlateau();
    void deplacePiece(QPoint *depart,QPoint *arrivee,bool joueur);
    bool estVide(const std::vector<std::vector<std::unique_ptr<chest::piece>>> &p,QPoint depart, bool joueur);
    bool pionCorrect(const std::vector<std::vector<std::unique_ptr<chest::piece>>> &p,QPoint depart, bool joueur);
    bool estUnAdversaire(const std::vector<std::vector<std::unique_ptr<chest::piece>>> &p,QPoint depart, bool joueur);
    bool selectionneSaPiece(std::vector<std::vector<std::unique_ptr<chest::piece>>> &p,QPoint *pts,bool joueur);
    void joueTour();
    QPoint point() const;
    void setPoint(QPoint point);
    QPoint d_dernierPoint;
private:
    std::vector<std::vector<std::unique_ptr<piece>>> d_plateau;
    //d_plateau(std::unique_ptr<piece>);//QPointer est un pointeur interlligent
friend class fenetreconnexion;


};


}
#endif // PARTIE_H
