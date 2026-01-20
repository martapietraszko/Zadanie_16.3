#include "historia.h"

historia::historia() {}
void historia::rozpocznij_egzamin()
{

}
void historia::dodaj_wylosowane(int nr_bloku, int nr_pytania)
{
    shistoria pytanie(nr_bloku, nr_pytania);
    m_baza.push_back(pytanie);
}
void historia::odrzucenie(int nr_bloki, int nr_pytania, bool status)
{
    shistoria pytanie(nr_bloki, nr_pytania, status);
    bool czy_znaleziono=false;
    for(int i=0;i<m_baza.size();i++)
    {
        if(m_baza[i].m_nr_bloku==pytanie.m_nr_bloku && m_baza[i].m_nr_pytania==pytanie.m_nr_pytania)
        {
            m_baza[i].status=false;
            czy_znaleziono=true;
            break;
        }
    }
    if(!czy_znaleziono)
    {
        m_baza.push_back(pytanie);
    }

}
