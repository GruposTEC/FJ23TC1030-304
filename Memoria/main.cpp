#include "padre.h"
#include "hija.h"
#include "hijo.h"
#include "familia.h"
using std::endl;
using std::cout;
int main(){
    /*Padre pa("juan");
    cout<<pa<<endl;
    Hija ija("maria");
    cout<<ija<<endl;
    Hijo ijo("rommel");
    cout<<ijo<<endl;*/
    Familia f;
    f.agregamiembro();
    cout<<f<<endl;
}