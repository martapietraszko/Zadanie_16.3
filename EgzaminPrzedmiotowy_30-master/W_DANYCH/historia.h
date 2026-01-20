#ifndef HISTORIA_H
#define HISTORIA_H
#include<qlist.h>
using namespace std;
#include<vector>
#include<QFile>
struct shistoria
{
    int m_nr_bloku;
    int m_nr_pytania;
    bool status;
    shistoria(int blok, int pytanie, bool status=true):m_nr_bloku(blok), m_nr_pytania(pytanie), status(status)
    {

    }

};

class historia
{
public:
    historia();
    void rozpocznij_egzamin();
    void dodaj_wylosowane(int nr_bloku, int nr_pytania);
    void odrzucenie(int nr_bloki, int nr_pytania, bool status=false);
    QList<shistoria> get_historia(){return m_baza;}



private:
    QList<shistoria> m_baza;


};

#endif // HISTORIA_H
