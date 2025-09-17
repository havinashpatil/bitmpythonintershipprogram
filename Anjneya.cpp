#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class stock {
private:
    string symbol;
    int volume;
    double open_price;
    double close_price;
    double buy_price;

public:
    
    stock();
    stock(string symbol, int volume, double open_price, double close_price, double buy_price);
    virtual ~stock();

    string getSymbol();
    int getVolume();
    double getOpenPrice();
    double getClosePrice();
    double getBuyPrice();

    void setSymbol(string Symbol);
    void setVolume(int Volume);
    void setOpenPrice(double Oprice);
    void setClosePrice(double Cprice);
    void setBuyPrice(double Bprice);

    double calCurrentHolding();
    double calOpenHolding();
    double calCloseHolding();
};

stock::stock() {
    setBuyPrice(0);
    setClosePrice(0);
    setOpenPrice(0);
    setSymbol("");
    setVolume(0);
}

stock::stock(string symbol, int volume, double open_price, double close_price, double buy_price) {
    setBuyPrice(buy_price);
    setClosePrice(close_price);
    setOpenPrice(open_price);
    setSymbol(symbol);
    setVolume(volume);
}

string stock::getSymbol() {
    return symbol;
}

int stock::getVolume() {
    return volume;
}

double stock::getOpenPrice() {
    return open_price;
}

double stock::getClosePrice() {
    return close_price;
}

double stock::getBuyPrice() {
    return buy_price;
}

void stock::setSymbol(string Symbol) {
    symbol = Symbol;
}

void stock::setVolume(int Volume) {
    volume = Volume;
}

void stock::setOpenPrice(double Oprice) {
    open_price = Oprice;
}

void stock::setClosePrice(double Cprice) {
    close_price = Cprice;
}

void stock::setBuyPrice(double Bprice) {
    buy_price = Bprice;
}

double stock::calCurrentHolding() {
    double h;
    h = (double)getVolume() * getBuyPrice();
    return h;
}

double stock::calOpenHolding() {
    double hmo;
    hmo = (double)getVolume() * getOpenPrice();
    return hmo;
}

double stock::calCloseHolding() {
    double hmc;
    hmc = (double)getVolume() * getClosePrice();
    return hmc;
}

stock::~stock() {
}

int main() {
    int stock_array = 3;
    stock stocks[stock_array]; 

    string symbol;
    int volume;
    double open_price;
    double close_price;
    double buy_price;

    for (int i = 0; i < stock_array; i++) {
        cout << "Stock" << i + 1 << endl;

        symbol:
        cout << "enter symbol: ";
        cin >> symbol;

        if ((symbol.find_first_not_of(' ') == std::string::npos) || symbol.empty() || (symbol.length() > 5)) {
            cout << "symbol should not be empty and size <= 5. Try again\n";
            goto symbol;
        }

        volume:
        cout << "enter volume: ";
        cin >> volume;

        if (volume <= 0) {
            cout << "volume should be >0. Try again\n";
            goto volume;
        }

        openp:
        cout << "enter opening price: ";
        cin >> open_price;

        if (open_price <= 0) {
            cout << "All prices should be >0. Try again\n";
            goto openp;
        }

        closep:
        cout << "Enter closing price: ";
        cin >> close_price;

        if (open_price <= 0) {
            cout << "all prices should be >0. Try again\n";
            goto closep;
        }

        buyp:
        cout << "enter buying price: ";
        cin >> buy_price;

        if (open_price <= 0) {
            cout << "All prices should be >0. Try again\n";
            goto buyp;
        }

        stocks[i] = stock(symbol, volume, open_price, close_price, buy_price);
    }


    for (int i = 0; i < stock_array; i++) {
        cout << "SYM = " << right << stocks[i].getSymbol() << ", H = " << stocks[i].calCurrentHolding() <<
            ", HMO = " << stocks[i].calOpenHolding() << ", HMC = " << stocks[i].calCloseHolding() << endl;
    }

    double totalh = 0;
    double totalhmo = 0;
    double totalhmc = 0;

    cout << endl << "SYMS =";
    for (int i = 0; i < stock_array; i++) {
        totalh = totalh + stocks[i].calCurrentHolding();
        totalhmo = totalhmo + stocks[i].calOpenHolding();
        totalhmc = totalhmc + stocks[i].calCloseHolding();
        cout << stocks[i].getSymbol() << ", ";
    }
    cout << endl;
    cout << "Total H: " << totalh << endl;
    cout << "Total HMO: " << totalhmo << endl;
    cout << "Total HMC: " << totalhmc << endl;

    system("pause");
    return 0;
}
