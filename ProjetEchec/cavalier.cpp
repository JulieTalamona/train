#include "cavalier.h"
#include <QString>
#include <QObject>
#include <QPoint>


<<<<<<< HEAD
Cavalier::Cavalier(bool couleur, QString image, QString nom) : piece{couleur,image,nom}
{}
=======
Cavalier::Cavalier(bool couleur, QString nom) : d_nom{nom}
{
    if(couleur)
         {
            d_image=
         }
    else
         {
            d_image=
         }
}
>>>>>>> Gaulthier

virtual bool Cavalier::PeutDeplacer(plateau P, casDep, casArriv) override
{
    // Faire un tableau de booléen ?
}
