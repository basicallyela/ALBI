#include <bits/stdc++.h>
 
using namespace std;

//arrays that will be used in the code, every array contains 3 numbers, numbers on position 0 are prices of albums in one shop,
//numbers on position 1 are prices of those albums in another shop...
int i, j, k=0;
int tear[3]={13, 14, 23}, answer[3]={14, 13, 20}, MOTS7[3]={15, 17, 25}, her[3]={17, 13, 21};
int iamu[3]={18, 15, 19}, golive[3]={19, 18, 30}, miroh[3]={19, 13, 20}, yw[3]={14, 11, 30};
int nct2020[3]={12, 16, 20}, nct2021[3]={15, 12, 20}, resonate[3]={20, 19, 26}, boss[3]={11, 13, 27};
int solo[3]={13, 14, 30}, squareone[3]={20, 19, 20}, squareup[3]={23, 16, 26}, thealbum[3]={18, 19, 19};

class logos
{
public:
    void looks()
{
    system("CLS");
    system("COLOR 0E");
    cout<<endl;
    cout<<R"(
                AAA                    LLLLLLLLLLL                  BBBBBBBBBBBBBBBBBB         IIIIIIIIII
               A:::A                   L:::::::::L                  B:::::::::::::::::B        I::::::::I
              A:::::A                  L:::::::::L                  B::::::BBBBBB::::::B       I::::::::I
             A:::::::A                 LL:::::::LL                  BB:::::B     B::::::B      II::::::II
            A:::::::::A                  L:::::L                      B::::B      B:::::B        I::::I
           A:::::A:::::A                 L:::::L                      B::::B     B::::::B        I::::I
          A:::::A A:::::A                L:::::L                      B::::BBBBBB::::::B         I::::I
         A:::::A   A:::::A               L:::::L                      B::::::::::::::BB          I::::I
        A:::::A     A:::::A              L:::::L                      B::::BBBBBB:::::::B        I::::I
       A:::::AAAAAAAAA:::::A             L:::::L                      B::::B     B::::::B        I::::I
      A:::::::::::::::::::::A            L:::::L                      B::::B      B::::::B       I::::I
     A:::::AAAAAAAAAAAAA:::::A           L:::::L         LLLLLL       B::::B     B:::::::B       I::::I
    A:::::A             A:::::A        LL:::::::LLLLLLLLL:::::L     BB:::::BBBBBB::::::::B     II::::::II
   A:::::A               A:::::A       L::::::::::::::::::::::L     B:::::::::::::::::::B      I::::::::I
  A:::::A                 A:::::A      L::::::::::::::::::::::L     B::::::::::::::::::B       I::::::::I
 AAAAAAA                   AAAAAAA     LLLLLLLLLLLLLLLLLLLLLLLL     BBBBBBBBBBBBBBBBBBB        IIIIIIIIII
                                                                                                      )"<<endl;

    cout<<endl;
}

void artistpage()
{
    system("CLS");
    system("COLOR E0");
    cout<<R"(
 ________  ________  _________  ___  ________  _________        ________  ________  ________  _______
|\   __  \|\   __  \|\___   ___\\  \|\   ____\|\___   ___\     |\   __  \|\   __  \|\   ____\|\  ___ \
\ \  \|\  \ \  \|\  \|___ \  \_\ \  \ \  \___|\|___ \  \_|     \ \  \|\  \ \  \|\  \ \  \___|\ \   __/|
 \ \   __  \ \   _  _\   \ \  \ \ \  \ \_____  \   \ \  \       \ \   ____\ \   __  \ \  \  __\ \  \_|/__
  \ \  \ \  \ \  \\  \|   \ \  \ \ \  \|____|\  \   \ \  \       \ \  \___|\ \  \ \  \ \  \|\  \ \  \_|\ \
   \ \__\ \__\ \__\\ _\    \ \__\ \ \__\____\_\  \   \ \__\       \ \__\    \ \__\ \__\ \_______\ \_______\
    \|__|\|__|\|__|\|__|    \|__|  \|__|\_________\   \|__|        \|__|     \|__|\|__|\|_______|\|_______|
                                       \|_________|)"<<endl;
}


void convertor()
{
    system("CLS");
    system("COLOR E0");
    cout<<R"( ________  ________  ________   ___      ___ _______   ________  _________  ________  ________
|\   ____\|\   __  \|\   ___  \|\  \    /  /|\  ___ \ |\   __  \|\___   ___\\   __  \|\   __  \
\ \  \___|\ \  \|\  \ \  \\ \  \ \  \  /  / | \   __/|\ \  \|\  \|___ \  \_\ \  \|\  \ \  \|\  \
 \ \  \    \ \  \\\  \ \  \\ \  \ \  \/  / / \ \  \_|/_\ \   _  _\   \ \  \ \ \  \\\  \ \   _  _\
  \ \  \____\ \  \\\  \ \  \\ \  \ \    / /   \ \  \_|\ \ \  \\  \|   \ \  \ \ \  \\\  \ \  \\  \|
   \ \_______\ \_______\ \__\\ \__\ \__/ /     \ \_______\ \__\\ _\    \ \__\ \ \_______\ \__\\ _\
    \|_______|\|_______|\|__| \|__|\|__|/       \|_______|\|__|\|__|    \|__|  \|_______|\|__|\|__|
                                                                                                  )"<<endl;

}
//clears screen and puts BTS logo
void btslogocaller()
{
    system("CLS");
    system("COLOR E0");
cout<<R"(|\   __  \|\___   ___\\   ____\
\ \  \|\ /\|___ \  \_\ \  \___|_
 \ \   __  \   \ \  \ \ \_____  \
  \ \  \|\  \   \ \  \ \|____|\  \
   \ \_______\   \ \__\  ____\_\  \
    \|_______|    \|__| |\_________\
                        \|_________|)"<<endl;
}

//cls and blackpink logo
void bplogocaller()
{
    system("CLS");
    system("COLOR E0");
        cout<< R"( ________  ___       ________  ________  ___  __    ________  ___  ________   ___  __
|\   __  \|\  \     |\   __  \|\   ____\|\  \|\  \ |\   __  \|\  \|\   ___  \|\  \|\  \
\ \  \|\ /\ \  \    \ \  \|\  \ \  \___|\ \  \/  /|\ \  \|\  \ \  \ \  \\ \  \ \  \/  /|_
 \ \   __  \ \  \    \ \   __  \ \  \    \ \   ___  \ \   ____\ \  \ \  \\ \  \ \   ___  \
  \ \  \|\  \ \  \____\ \  \ \  \ \  \____\ \  \\ \  \ \  \___|\ \  \ \  \\ \  \ \  \\ \  \
   \ \_______\ \_______\ \__\ \__\ \_______\ \__\\ \__\ \__\    \ \__\ \__\\ \__\ \__\\ \__\
    \|_______|\|_______|\|__|\|__|\|_______|\|__| \|__|\|__|     \|__|\|__| \|__|\|__| \|__|
    )"<<endl;
}

//cls and skz logo
void skzlogocaller()
{
    system("CLS");
    system("COLOR E0");
    cout<< R"( ________  _________  ________  ________      ___    ___      ___  __    ___  ________  ________
|\   ____\|\___   ___\\   __  \|\   __  \    |\  \  /  /|    |\  \|\  \ |\  \|\   ___ \|\   ____\
\ \  \___|\|___ \  \_\ \  \|\  \ \  \|\  \   \ \  \/  / /    \ \  \/  /|\ \  \ \  \_|\ \ \  \___|_
 \ \_____  \   \ \  \ \ \   _  _\ \   __  \   \ \    / /      \ \   ___  \ \  \ \  \ \\ \ \_____  \
  \|____|\  \   \ \  \ \ \  \\  \\ \  \ \  \   \/  /  /        \ \  \\ \  \ \  \ \  \_\\ \|____|\  \
    ____\_\  \   \ \__\ \ \__\\ _\\ \__\ \__\__/  / /           \ \__\\ \__\ \__\ \_______\____\_\  \
   |\_________\   \|__|  \|__|\|__|\|__|\|__|\___/ /             \|__| \|__|\|__|\|_______|\_________\
   \|_________|                             \|___|/                                       \|_________|
   )"<<endl;
}


//cls and nct logo
void nctlogocaller()
{
    system("CLS");
    system("COLOR E0");
        cout << R"( ________   ________ _________
|\   ___  \|\   ____\\___   ___\
\ \  \\ \  \ \  \___\|___ \  \_|
 \ \  \\ \  \ \  \       \ \  \
  \ \  \\ \  \ \  \____   \ \  \
   \ \__\\ \__\ \_______\  \ \__\
    \|__| \|__|\|_______|   \|__|
)"<<endl;
}
};


//function that happens only at the very beginning of code, it asks the user if he wants Albi or convertor part of the programme
string prviUnos()
{
    logos logo;
    ponovo: logo.looks();
    string unos;
    int brojac=0;
    cout<<"Welcome to Albi, would you like to convert a price or shop for albums? (type 1 for the first and 2 for the latter): ";
    cin>>unos;
    cout<<endl;
    if (unos=="1" || unos=="2"){
        return unos;}

    else {goto ponovo;}}

//function that gives the user a list of names, from which they can pick whose album they want to buy
char odabirArtista()
{
    logos logo;
    again: string unos;
    system("CLS");
    logo.artistpage();
    cout<<" 1) BTS\n 2) BLACKPINK\n 3) STRAY KIDS\n 4) NCT"<<endl;
    cout<<"Choose an artist whose album you would like to buy: ";
    cin>>unos;
    cout<<endl;
    if (unos=="1" || unos=="2" || unos=="3" || unos=="4"){
                return unos[0];}
    else{ goto again;}

}


//function that gives the user a list of albums from picked artist, from which he can pick which one they want to buy;
//they can choose more than one album but the maximum of albums per user is 6
int odabirAlbuma(char unos)
{
    start: logos logo;
    string pom;
    if (unos=='1'){
        jedan: logo.btslogocaller();
        cout<<" 1) Her\n 2) Tear\n 3) Answer\n 4) MOTS7"<<endl;
        cout<<"Choose which album you would like to buy: ";
        cin>>pom;
        if(pom=="1" || pom=="2" || pom=="3" || pom=="4"){
            return pom[0]-48;
        }
        else {goto jedan;}}

    else if(unos=='2'){
       dva: logo.bplogocaller();
        cout<<" 1) The album\n 2) Solo\n 3) Square one\n 4) Square up"<<endl;
        cout<<"Choose which album you would like to buy: ";
        cin>>pom;
        if(pom=="1" || pom=="2" || pom=="3" || pom=="4"){
            return pom[0]-48;
        }
        else {goto dva;}}

    else if (unos=='3'){
        tri: logo.skzlogocaller();
        cout<<" 1) I am you\n 2) Miroh\n 3) Yellow wood\n 4) GO LIVE"<<endl;
        cout<<"Choose which album you would like to buy: ";
        cin>>pom;
        if(pom=="1" || pom=="2" || pom=="3" || pom=="4"){
            return pom[0]-48;
        }
        else {goto tri;}}

    else if (unos=='4'){
        cetiri: logo.nctlogocaller();
        cout<<endl;
        cout<<" 1) NCT2020\n 2) BOSS\n 3) Resonate\n 4) NCT2021"<<endl;
        cout<<"Choose which album you would like to buy: ";
        cin>>pom;
        if(pom=="1" || pom=="2" || pom=="3" || pom=="4"){
            return pom[0]-48;
        }
        else {goto cetiri;}}

    else{goto start;}}


//this void function calculates how much shipping will cost per album in KMs
int s_calculator(int numberofalbums)
{
    int shipping, a;
    if (numberofalbums<6){
        if (numberofalbums%3==0){
            shipping = 20;}
        else{shipping = 30;}}
    else if (numberofalbums=6){
        if (numberofalbums%3==0){
            shipping = 16;}
        else{shipping = 30;}}
        return shipping*numberofalbums;
        }


//this function uses brojac, odg and niz[] to put all prices of albums that the user buys into one big array
std::array<int, 18> brojacvo1(int brojac, char odg, int niz[3])
{
    std::array<int,18>arrMerge;
        int k, j=0, pom;
        if (odg=='Y'){
        if (brojac==0){
            k=brojac;
            for (i=k; i<3; i++){
            arrMerge[i]=niz[i-k];
            j++;

        }
        for (int i=0; i<j; i++){
            return arrMerge;
        }

        }
        else if (brojac!=0){
        k=brojac*3;
        pom=k;
        for (i=k; i<k+3; i++){
            arrMerge[i]=niz[i-k];
            pom++;
        }
        for (int i=0; i<pom; i++){
            return arrMerge;
        }
        }}
        else if (odg=='N'){
                k=brojac*3;
            for (int i = 0; i<k; i++){
                    return arrMerge;
        }
        cout<<endl;
        }}


//function calculates the cheapest price, and where that is using niz, brojac and sta
int krajnjiRezultat(std::array <int, 18> niz, int brojac, int sta)
{
    int najjeftinije, suma, p;
    double pom=1000000;
    if (brojac==1){
        for (int i=0; i<3; i++){
            suma=niz[i];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }
    }
    else if (brojac==2){
        for (int i=0; i<3; i++){
            suma=niz[i]+niz[i+3];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }

    }
    else if (brojac==3){
        for (int i=0; i<3; i++){
            suma=niz[i]+niz[i+3]+niz[i+6];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }
    }
    else if (brojac==4){
        for (int i=0; i<3; i++){
            suma=niz[i]+niz[i+3]+niz[i+6]+niz[i+9];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }
    }
    else if (brojac==5){
        for (int i=0; i<3; i++){
            suma=niz[i]+niz[i+3]+niz[i+6]+niz[i+9]+niz[i+12];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }
    }
    else if (brojac==6){
        for (int i=0; i<3; i++){
            suma=niz[i]+niz[i+3]+niz[i+6]+niz[i+9]+niz[i+12]+niz[i+15];
            if (suma<pom){
                p=0;
                pom=suma;
                p=i+1;
            }
        }
    }
    if (sta==1){ return p;}
    else if (sta==2){najjeftinije=pom; return najjeftinije;}}


//tells the user which store he should buy the albums from, and will take him to that store
void nameofstore(int a)
{
    if (a == 1){
        cout << "\nThe cheapest store where you can buy these albums is Kpoptown." << endl;
    }
    else if(a == 2){
        cout << "\nThe cheapest store where you can buy these albums is Ktown4u." << endl;
    }
    else if (a == 3){
        cout << "\nThe cheapest store where you can buy these albums is Cokodive." << endl;
    }
    cout << endl;
}

//this class will contain two methods
class Konvertor
{
private:
    logos logo;
    float konvertovani_broj, broj, dolar = 1.61, kuna = 1.96;
    string a = "Y", odg1, pombroj;

    char broj1;
    char odg = 'Y' ;
        public:
    //this method stands alone and is the second part of the albi programme
    //it is the convertor, all by itself
        void samokonvertor(){
        while (odg == 'Y'){
        opet: system("CLS");
        unos: logo.convertor();
        cout << endl;
        cout << "Which type of conversion do you want?\n 1) $ to KM\n 2) EURO to KM\n 3) KM to $\n 4) KM to EURO\nEnter number: ";
        cin >> a;
        if(a!="1" && a!="2" && a!="3" && a!="4"){
            goto opet;
        }
        if (a[0] == '1'){
            cout << "Which price do you want to convert (ex. 23.5): ";
            cin >> broj;
            if (broj == 504004){
                system("CLS");
                cout << R"(                         --------------------------------------
                         --------------------------------------
                         --------------------------------------
                         -----------MADE BY ELA BALJO----------
                         --------------------------------------
                         --------------------------------------
                         --------------------------------------)" << endl;
                         cout << endl;
                         cout << endl;
                         cout << endl;
                jao: cout << "Enter 1 to continue: ";
                cin >> pombroj;
                if (pombroj == "1"){
                    goto dalje;
                }
                else {goto jao;}
            }
            dalje: konvertovani_broj = broj*dolar;
            cout << endl;
            cout << "Converted price is: " << konvertovani_broj << endl;
            jedan: cout << "\nDo you want to convert another price? (type Y for yes and N for no): ";
            cin >> odg1;
            if (odg1[0] != 'N' && odg1[0] != 'Y' && odg1[0]!='y' && odg1[0]!='n'){
            goto jedan;}
        }
        else if (a[0] == '2'){
            cout << "Which price do you want to convert (ex. 23.5): ";
            cin >> broj;
            konvertovani_broj = broj*kuna;
            cout << endl;
            cout << "Converted price is: "<<konvertovani_broj<<endl;
            dva: cout << "\nDo you want to convert another price? (type Y for yes and N for no): ";
            cin >> odg1;
            if (odg1[0] != 'N' && odg1[0] != 'Y' && odg1[0]!='y' && odg1[0]!='n'){
            goto dva;}
        }
        else if (a[0] == '3'){
            cout << "Which price do you want to convert (ex. 23.5): ";
            cin >> broj;
            konvertovani_broj = broj/dolar;
            cout << endl;
            cout << "Converted price is: " << konvertovani_broj << endl;
            tri: cout << "\nDo you want to convert another price? (type Y for yes and N for no): ";
            cin >> odg1;
            if (odg1[0] != 'N' && odg1[0] != 'Y' && odg1[0]!='y' && odg1[0]!='n'){
            goto tri;}
        }
        else if (a[0] == '4'){
            cout << "Which price do you want to convert (ex. 23.5): ";
            cin >> broj;
            konvertovani_broj = broj/kuna;
            cout << endl;
            cout << "Converted price is: " << konvertovani_broj << endl;
            cetiri: cout << "\nDo you want to convert another price? (type Y for yes and N for no): ";
            cin >> odg1;
            if (odg1[0] != 'N' && odg1[0] != 'Y' && odg1[0]!='y' && odg1[0]!='n'){
            goto cetiri;}
        }
        else{system("CLS");
    goto unos;}



        }}


    //this is the second method where the final price of albums in the Albi part of the programe will be calculated
    //the price that we get in Albi is in dollars, and will be conerted to KMs before telling the user what the final price is
        void krajnjikonvertor(int cijena, int shipping){
        double a;
        a = (cijena*dolar)+shipping;
        cout << "The total price of albums (including shipping) is: " << a << "KM." << endl;}
};


//this function contains odabirAlbuma and odabirArtista, and lets the user add more than one album to the cart;
//the maximum number of albums is 6
//this function also calls function brojacvo1
void albi()
{

    Konvertor cijenalast;
    std::array <int, 18> arr;
    string odgpom, odgovorpom;
    int pomocnia;
    int brojac=0, z=0, be, ce, b;
    char odgovor='Y', odg, apom, bpom, a;
    samipocetak: if (isalpha(odgovor)){
    if (brojac==6){
       odgovor='N';
       goto brojac6;
    }
    system("CLS");
    cout << "Welcome to Albi! " << endl;
    cout << endl;
    a = odabirArtista();
    b4: b = odabirAlbuma(a);
    if (b <= 0 || b > 16){
        goto b4;
    }
    else if (b > 0 && b < 17){



        if (brojac == 0){
                switch (b){
            case 1: arr = brojacvo1(brojac, odgovor, her); break;
            case 2: arr = brojacvo1(brojac,odgovor, tear); break;
            case 3: arr = brojacvo1(brojac,odgovor, answer); break;
            case 4: arr = brojacvo1(brojac, odgovor,MOTS7); break;
            case 5: arr = brojacvo1(brojac, odgovor,thealbum); break;
            case 6: arr = brojacvo1(brojac, odgovor,solo); break;
            case 7: arr = brojacvo1(brojac, odgovor,squareone); break;
            case 8: arr = brojacvo1(brojac, odgovor,squareup); break;
            case 9: arr = brojacvo1(brojac, odgovor,iamu); break;
            case 10: arr = brojacvo1(brojac, odgovor,miroh); break;
            case 11: arr = brojacvo1(brojac, odgovor,yw); break;
            case 12: arr = brojacvo1(brojac, odgovor,golive); break;
            case 13: arr = brojacvo1(brojac, odgovor,nct2020); break;
            case 14: arr = brojacvo1(brojac, odgovor,boss); break;
            case 15: arr = brojacvo1(brojac, odgovor,resonate); break;
            case 16: arr = brojacvo1(brojac, odgovor,nct2021); break;}}

        else if (brojac != 0){
            switch (b){
            case 1: arr = brojacvo1(brojac, odgovor, her); break;
            case 2: arr = brojacvo1(brojac,odgovor, tear); break;
            case 3: arr = brojacvo1(brojac,odgovor, answer); break;
            case 4: arr = brojacvo1(brojac, odgovor,MOTS7); break;
            case 5: arr = brojacvo1(brojac, odgovor,thealbum); break;
            case 6: arr = brojacvo1(brojac, odgovor,solo); break;
            case 7: arr = brojacvo1(brojac, odgovor,squareone); break;
            case 8: arr = brojacvo1(brojac, odgovor,squareup); break;
            case 9: arr = brojacvo1(brojac, odgovor,iamu); break;
            case 10: arr = brojacvo1(brojac, odgovor,miroh); break;
            case 11: arr = brojacvo1(brojac, odgovor,yw); break;
            case 12: arr = brojacvo1(brojac, odgovor,golive); break;
            case 13: arr = brojacvo1(brojac, odgovor,nct2020); break;
            case 14: arr = brojacvo1(brojac, odgovor,boss); break;
            case 15: arr = brojacvo1(brojac, odgovor,resonate); break;
            case 16: arr = brojacvo1(brojac, odgovor,nct2021); break;}
            }
            }
    cout << endl;
    brojac++;
    odgovour: cout << "Number of albums that you bought: " << brojac << endl;
    cout << "Do you want to buy more albums (type Y for yes and N for no): ";
    cin >> odgpom;
    pomocnia = odgpom.length();
    if (pomocnia == 1){
            odg = odgpom[0];
            odgovor = toupper(odg);
            cout << endl;
            if (odgovor == 'Y'){
                cout << "Number of albums that you bought: " << brojac << endl;
                if (brojac == 6){
                    odgovor = 'N';
                    goto brojac6;
                }
                else{
                    goto samipocetak;}
                }
            else if (odgovor == 'N' || brojac == 6){
           brojac6: system("CLS");

                    arr = brojacvo1(brojac, odgovor, her);

                cout << "Number of albums that you bought: " << brojac << endl;

                be = krajnjiRezultat(arr, brojac, 1);
                ce = krajnjiRezultat(arr, brojac, 2);
                nameofstore(be);
                cijenalast.krajnjikonvertor(ce, s_calculator(brojac));


                }
            else { cout << endl;
        odgovor = 'Y';
        cout << "Something went wrong, please try again." << endl;
        goto odgovour;}
    }
    else { cout << endl;
    odgovor = 'Y';
    cout << "Something went wrong, please try again." << endl;
    goto odgovour;}}

    else { cout << endl;
    odgovor = 'Y';
    cout << "Something went wrong, please try again." << endl;
    goto odgovour;}}



//main function, where all functions and classes will be called
int main()
{
    system("COLOR E0");
    string pu, pomodg1, pomodg;
    char odg1, odg;
    int brojac1, brojac;
    prviunos: pu = prviUnos();
    if (pu == "2"){
        system("CLS");
        albi();
       p:cout << endl;
       cout << "Do you want to say goodbye to albi (Y for yes N for no):";
        cin >> pomodg1;
        brojac = pomodg1.length();
        if(brojac == 1){
                odg1 = pomodg1[0];
        odg = toupper(odg1);
        if (odg == 'Y'){
            return 0;
        }
        else if (odg == 'N'){
            goto prviunos;
        }
        else{
            cout << "Something went wrong, please try again." << endl;
            goto p;
        }
        }
        else{
            cout << "Something went wrong, please try again." << endl;
            goto p;
        }}
    else if (pu == "1"){
        system("CLS");
        Konvertor nova;
        nova.samokonvertor();
        c: cout << endl;
        cout << "Do you want to say goodbye to albi (Y for yes N for no):";
        cin >> pomodg;
        brojac1 = pomodg.length();
        if (brojac1 == 1){
                odg1 = pomodg[0];
        odg = toupper(odg1);
        if (odg == 'Y'){
            return 0;
        }
        else if (odg =='N'){
            goto prviunos;
        }

        else{
            cout << "Something went wrong, please try again." << endl;
            goto c;
        }}
        else{
            cout << "Something went wrong, please try again." << endl;
            goto c;
        }
    }
    else{
        goto prviunos;}

return 0;}

