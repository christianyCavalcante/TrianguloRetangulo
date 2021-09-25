class Triangulos{

  private: 
    double catetoA;
    double catetoB;
    double hipotenusa;

  public: 
    Triangulos();
    Triangulos(double, double);
    Triangulos(double, double, double);

    void setCatetoA(double);
    void setCatetoB(double);
    void setHipotenusa(double);

    double getCatetoA();
    double getCatetoB();
    double getHipotenusa();

    bool validarTrianguloRetangulo();
    double calculaPerimetro();
    double calculaArea();
    double calcularHipotenusa();

    static Triangulos compara(Triangulos, Triangulos);
};

