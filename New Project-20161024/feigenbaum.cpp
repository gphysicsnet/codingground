class feigenbaum {

private:
  // fields
  double r;
  int num;
  
public:
    double itera(double inicio);
    //constructor
    feigenbaum(double factor,int numero);
};

feigenbaum::feigenbaum(double factor,int numero)
{
    r = factor;
    num = numero;
}
  
// method
double feigenbaum::itera(double inicio)
{
    double x = inicio;
    for(int i = 0;i < num;i++){
      x = r*x*(1-x);
    }
    return x;
}
