//Obtenga la nomina mensual,salario neto, de los empleados de una empresa cuyo trabajo se paga por horas y de modo siguiente:

#include <iostream>

using namespace std;

int main(){

  int hora=0;
  float dinero=0, impuesto=0,salario=0;
  string nombre,apellido;

  cout<<"Bienvenido a su calculadora de nomina mensual\n";
  cout<<"Favor ingrese su nombre\n";
  cin>>nombre;
  cout<<"Favor ingrese su apellido\n";
  cin>>apellido;
  cout<<"Favor ingrese la cantidad de horas trabajadas\n";
  cin>>hora;
  
  if(hora>0&&hora<=160){
    dinero = hora*10;
  }else if(hora>160){
    dinero = hora*15;
  }
  if(dinero>0&&dinero<=2000){
    cout<<nombre<<" "<<apellido<<" Su salario neto es de: "<<dinero;
    }else if(dinero>2000&&dinero<=2200){
     impuesto = dinero*0.20;
     salario = dinero - impuesto;
     cout<<nombre<<" "<<apellido<<" Su salario con impuesto aplicado es de :"<<salario;
    }else if(dinero>2200){
    impuesto = dinero*0.30;
    salario = dinero - impuesto;
    cout<<nombre<<" "<<apellido<<" Su salario con impuesto aplicado es de :"<<salario;
    }     
    return 0;
}