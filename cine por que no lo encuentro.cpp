#include<iostream>
#include<cctype>
#include<cstdlib>
#include<time.h>

using namespace std;
//variables globales
	string paraReservar[6][7]={"A1","A2","A3","A4","A5","A6","A7",
								"B1","B2","B3","B4","B5","B6","B7",
								"C1","C2","C3","C4","C5","C6","C7",
								"D1","D2","D3","D4","D5","D6","D7",
								"E1","E2","E3","E4","E5","E6","E7",
								"F1","F2","F3","F4","F5","F6","F7",
								};
	string aConfirmar[6][7]={"A1","A2","A3","A4","A5","A6","A7",
								"B1","B2","B3","B4","B5","B6","B7",
								"C1","C2","C3","C4","C5","C6","C7",
								"D1","D2","D3","D4","D5","D6","D7",
								"E1","E2","E3","E4","E5","E6","E7",
								"F1","F2","F3","F4","F5","F6","F7",
								};
								
	string textRandom[10]={"(Recuerda simpre confirmarle la compra al cliente)","(Siempre recuerda ofreserle un combo al cliente en dulceria)",
							"(Reccuerda ser amable con los clientes)","(Siempre hay peliculas nuevas)","(recuerda confirmar cualquier movimiento al cliente)",
							"(siempre entrega el tiket al cliente)","(Si hay algun fallo en el programa reuerda llamar al tecnico)",
							"(Recuerda decirle al cliente que disfrute su pelicula)"};			
							
	int ops,costo=45,reembolso=0;													
	int asientosDisp=42,corteVendidos=0,corteCancelados=0,totalVendidos=0,corteVendBol=0;
	int tiketReservados=0,tiketCancelados=0,tiketTotBol=0;
	
	string asiento="";
	string *senala;
	
//prototipos de funciones
void imprimirPantalla();	
void inicioSecion();
int menu();


//1
void reservar();
//2
void cancelar();
//3
void dulceria();
//3.1
void palomas();
//3.2
void refrescos();
//3.3
void dulces();
//4
void tiket();
//5
void finCompra();


int main(){
	
	inicioSecion();
	
	//menu
do{	


	system("mode con: cols=120 lines=35");
	system("title Menu de cine phon");
	menu();
	//fin de menu
	
	switch(ops){
		
		case 1:{
			
			reservar();
			
			break;
		}
		case 2:{
			
			cancelar();
			
			break;
		}
		case 3:{
			
			dulceria();
			
			break;
		}
		case 4:{
			
			tiket();
			break;
		}
		case 5:{
			
			finCompra();
			break;
		}
		case 6:{
			//fin del programa
			break;
		}
		default:
		cout<<"\n\t[opcion invalida]\n";
		system("pause");
		continue;
		
	}
	
}while(ops!=6);	
	
	
	return 0;
}


//INICIO DE SECION			
void inicioSecion(){
	
	string correo="cine.www.com",contra="0123";
	string pagina="",inicio="";
	int frase=0;
	
	while(1){
	
	cout<<"\n\n\n\t[Ingrese el correo del usuario qu atendera el mostrador]\n\t";
		cin>>pagina;
	cout<<"\n\t[Ingrese su contraseña]\n\t";
		cin>>inicio;
	
	if(pagina!=correo||inicio!=contra){
		cout<<"\n\t[EL correo o la ccontraseña son incorrectos]\n\t[Intente ingresarlos de nuevo]\n";
		continue;
	}else
		break;
	
	}
	cout<<"\n\n\n\n\n";
	system("Pause");
	system("cls");
	system("color 09");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tIniciando sesion...\n\t\t\t\t\t\t  "<<correo<<"\n\n\n";
	srand(time(NULL));
	frase=0+rand()%(7);
	cout<<"\t\t\t\t\t"<<textRandom[frase]<<"\n\n\n";
	system("pause")	;
		return;
}

//IMPRIME LA PANTALLA 
void imprimirPantalla(){
	
	system("cls");
	system("color 0a");
	
	cout<<"\n\n\n\t\t\t\t\t    ";
	for(int i=0;i<21;i++){
		cout<<"* ";
	}
	cout<<"\n\n\t\t\t\t\t    "
		"*\t         P A N T A L L A\t    *"
		"\n\n\t\t\t\t\t    ";
	for(int i=0;i<21;i++){
		cout<<"* ";
	}
	
	cout<<"\n\n\n";
	for(int i=0;i<6;i++){
		cout<<"\t\t\t      ";
		if(i==0){
			cout<<"A     |     ";
		}else if(i==1){
				cout<<"B     |     ";
				}else if(i==2){
						cout<<"C     |     ";
						}else if(i==3){
									cout<<"D     |     ";
								}else if(i==4){
										cout<<"E     |     ";
										}else if(i==5){
												cout<<"F     |     ";
												} 
		for(int j=0;j<7;j++){
			cout<<paraReservar[i][j]<<"    ";
			if(j==4){
				cout<<"\t";
			}
			}
		cout<<"\n\n";
	}
	cout<<"\t\t\t     -------|-------------------------------------------------------"
		"\n\t\t\t\t\t  1     2     3     4     5     \t6     7";
		return;
}


//MENU
int menu(){
	
	system("cls");
	system("color 0c");
	
	ops=0;
	
	cout<<"\n\n\n\t\t\t\t\t\t\tMENU\n\n\n"
		"\t\t\t\t\t\t(1) RESERVAR BOLETOS\n\n\n"
		"\t\t\t\t\t\t(2) CANCELAR BOLETOS\n\n\n"
		"\t\t\t\t\t\t(3) DULCERIA\n\n\n"		
		"\t\t\t\t\t\t(4) IMPRIMIR TIKET\n\n\n"
		"\t\t\t\t\t\t(5) FIN DE LA COMPRA\n\n\n"
		"\t\t\t\t\t\t(6) CERRAR PROGRAMA\n\n\n";
	cout<<"\t[Opcion]\n\t ";
		cin>>ops;
		
		return ops;
		
}

//1
//VENDIDOS
void reservar(){
	
	int contAs=0;
	char conf;
	bool ocupado=true;
	
	system("cls");
	
	imprimirPantalla();
	
	if(asientosDisp==0){
		cout<<"\n\t\t\t\t[La sala esta llena tal vez le interese regresar mas tarde]\n\n\n";
		system("pause");
		system("cls");
		return;
	}
	do{
	cout<<"\n\n\t[ingrese la cantidad de hacientos a reservar]\n\t";	
		cin>>tiketReservados;
		
		while(tiketReservados>asientosDisp||tiketReservados<0){
	
			cout<<"\n\t[No hay asientos suficientes o la cantidad que ingreso es invalida]"
				"\n\t[ingrese la cantidad de hacientos a reservar]\n\t";
				cin>>tiketReservados;
			
		}
		
		if(tiketReservados==0){
			cout<<"\t[Desea regresar al menu principal s(Si)/n(No)]";
			cin>>conf;
			
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
		
		cout<<"\t[confirmacion invalida ingrese una opcion valida s(Si)/n(No)]\n\t";
			cin>>conf;
			}
			
			if(conf=='s'||conf=='S'){
				return;
			}else
				continue;
		}
	
	}while(tiketReservados==0);	
	
	
	if(tiketReservados==42){
		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){
				paraReservar[i][j]="[$]";
			}
		}
		
		cout<<"\t[Desea confirmmar su compra s(Si)/n(No)]\n\t";
			cin>>conf;
	
	while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
		
		cout<<"\t[confirmacion invalida ingrese una opcion valida s(Si)/n(No)]\n\t";
			cin>>conf;
	}
	
	if(conf=='s'||conf=='S'){		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){				
				aConfirmar[i][j]=paraReservar[i][j];			
			}			
		}	
		asientosDisp-=tiketReservados;
		corteVendidos+=tiketReservados;
		totalVendidos+=tiketReservados;
		tiketTotBol=tiketReservados*costo;
	}else{		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){
				
				paraReservar[i][j]=aConfirmar[i][j];
				
			}			
		}
		tiketTotBol=0;
	}
		imprimirPantalla();
		return;
	}
	
	do{
		contAs++;
		asiento="";
		senala=&asiento;
		
		cout<<"\n\t[Butaca "<<contAs<<"]   ";
			cin>>asiento;
		
		asiento[0]=toupper(asiento[0]);
		
		//verificar que no este ocupado   
		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){
				if(paraReservar[i][j]==*senala){
					ocupado=false;
					break;					
				}
				ocupado=true;
			}
			if(ocupado==false){
				break;
			}			
		}
			if(ocupado==true){
				cout<<"\t[Lugar vendido o no esta en la sala]\n";
				contAs--;
				continue;
				
			}

	//reservacion
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){
				if(paraReservar[i][j]==*senala){				
				paraReservar[i][j]="[$]";				
				}
			}			
		}
	
	
	}while(contAs<=tiketReservados-1);
	
	cout<<"\t[Desea confirmmar su compra s(Si)/n(No)]\n\t";
	cin>>conf;
	
	while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
		
		cout<<"\t[confirmacion invalida ingrese una opcion valida s(Si)/n(No)]\n\t";
			cin>>conf;
	}
	
	if(conf=='s'||conf=='S'){
		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){				
				aConfirmar[i][j]=paraReservar[i][j];	
			}			
		}	
		asientosDisp-=tiketReservados;
		corteVendidos+=tiketReservados;
		totalVendidos+=tiketReservados;
		tiketTotBol=tiketReservados*costo;
	}else{		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){
				
				paraReservar[i][j]=aConfirmar[i][j];
			}
			
		}
		tiketTotBol=0;
	}
	
	imprimirPantalla();
	cout<<"\n\n\n\n\n";
	system("pause");
	system("cls");
	return;
	
}

//2
//CANCELADOS
void cancelar(){
	
	system("cls");
	
	char fila[6]={'A','B','C','D','E','F'};	
	char columna[7]={'1','2','3','4','5','6','7'};
	char conf;
	int listos=0,i=0,j=0;
	bool ocupado=true;
	
	if(asientosDisp==42){
		cout<<"\n\t\t\t\t[No es posible cancelar asientos en este momento]\n\n\n";
		system("pause");
		system("cls");
		return;
	}
	
	imprimirPantalla();
	
		cout<<"\n\n\n\t[Cantidad de asientos a cancelar]\n\t";
		cin>>tiketCancelados;
		
		while(tiketCancelados>corteVendidos||tiketCancelados<1){
			cout<<"\n\t[la cantidad de asientos que desea cancelar es invalida]\n\t";
			cin>>tiketCancelados;
		}
		
		while(tiketCancelados>15){
			cout<<"\n\t[No puede cancelar mas de 15  asientos a la vez]\n\t";
			cin>>tiketCancelados;
			
		}
		asientosDisp+=tiketCancelados;
		corteVendidos-=tiketCancelados;	
		corteCancelados+=tiketCancelados;
		reembolso=tiketCancelados*costo;
		
	do{
		senala=&asiento;
		asiento="";	
		listos++;
		
		cout<<"\n\t[Ingresa butaca "<<listos<<"]\n\t";
		cin>>asiento;
		asiento[0]=toupper(asiento[0]);
		
		while(*senala!="A1"&&*senala!="A2"&&*senala!="A3"&&*senala!="A4"&&*senala!="A5"&&*senala!="A6"&&*senala!="A7"&&
			  *senala!="B1"&&*senala!="B2"&&*senala!="B3"&&*senala!="B4"&&*senala!="B5"&&*senala!="B6"&&*senala!="B7"&&
			  *senala!="C1"&&*senala!="C2"&&*senala!="C3"&&*senala!="C4"&&*senala!="C5"&&*senala!="C6"&&*senala!="C7"&&
			  *senala!="D1"&&*senala!="D2"&&*senala!="D3"&&*senala!="D4"&&*senala!="D5"&&*senala!="D6"&&*senala!="D7"&&
			  *senala!="E1"&&*senala!="E2"&&*senala!="E3"&&*senala!="E4"&&*senala!="E5"&&*senala!="E6"&&*senala!="E7"&&
			  *senala!="F1"&&*senala!="F2"&&*senala!="F3"&&*senala!="F4"&&*senala!="F5"&&*senala!="F6"&&*senala!="F7"){
			
			cout<<"\n\t[Ingrese una opcion que este dentro de la sala]\n\t";
			cin>>asiento;
			asiento[0]=toupper(asiento[0]);
		}
		
		for(i=0;i<6;i++){
			if(asiento[0]==fila[i]){
				break;
			}
		
		}
			
		for(j=0;j<7;j++){
			if(asiento[1]==columna[j]){
				break;
			}
		}
		
		//verificacion
		if(paraReservar[i][j]==*senala){
			
			cout<<"\n\n\t[Lo sentimos el lugar aun no esta vendido]";
			listos--;
			continue;
			
		}
		
		paraReservar[i][j]=asiento;
		
		
		
	}while(listos<tiketCancelados);
	
	cout<<"\n\t[Desea cancelar su compra  s(Si)/n(No)]\n\t";
	cin>>conf;
	
	while(conf!='S'&&conf!='s'&&conf!='N'&&conf!='n'){
		
		cout<<"\n\t[Ingrse una opcion valida]\n\t";
		cin>>conf;
		
	}
	
		if(conf=='s'||conf=='S'){		
		for(int i=0;i<6;i++){
			for(int j=0;j<7;j++){				
				aConfirmar[i][j]=paraReservar[i][j];	
			}			
		}	
		
		  }else{		
			for(int i=0;i<6;i++){
				for(int j=0;j<7;j++){				
					paraReservar[i][j]=aConfirmar[i][j];
					asientosDisp-=tiketCancelados;
					corteVendidos+=tiketCancelados;
				}
			
			}
			reembolso=0;
		}
	
	imprimirPantalla();
	cout<<"\n\n\n\n\n";
	system("pause");
	system("cls");
	return;
}

//3
//DULCERIA
void dulceria(){
	
	int opsd=0;

	
	do{
		
	system("cls");
	system("color 0c");
	
	cout<<"\n\n\n\t\t\t\t\t\tMENU DE DULCERIA\n\n\n"
		"\t\t\t\t\t\t(1) PALOMITAS\n\n\n"
		"\t\t\t\t\t\t(2) REFRESCOS\n\n\n"
		"\t\t\t\t\t\t(3) DULCES\n\n\n"		
		"\t\t\t\t\t\t(4) SALIR/CONTINUAR...\n\n\n";
	cout<<"\t[Opcion]\n\t ";
		cin>>opsd;
	
	switch(opsd){
		
	case 1:{
		
		palomas();
		
		break;
	}
	case 2:{
		
		refrescos();
		
		break;
	}
	case 3:{
		
		 dulces();
		
		break;
	}
	
	case 4:{
		break;
	}
	default:
		cout<<"\n\t[Ingrse una opcion valida]\n";
		system("pause");
		continue;
	}
}while(opsd!=4);
	
	return;
	
}
//variables globales de la funion
	// 0=Jumbo, 1=Grandes, 2=Medianas, 3=chicas;
	int tiketPzPalomitas[4]={0,0,0,0};   
	int tiketPesosPalomitas[4]={0,0,0,0};
	int cortePzPalomitas[4]={0,0,0,0};
	int cortePesosPalomitas[4]={0,0,0,0};
	// 0=Jumbo, 1=Grandes, 2=Medianas, 3=chicas;
	
	
//3.1
void palomas(){
	
	int opsp=0;	
	char conf;
	int PalpresJum=90,PalpresGd=85,PalpresMed=75,PalpresCh=65;
	
	
	
	do{
		system("cls");
		
	cout<<"\n\n\n\t\t\t\t\t\tMENU PALOMITAS\n\n\n"
		"\t\t\t\t\t\t(1) JUMBO   {$90}\n\n\n"
		"\t\t\t\t\t\t(2) GRANDES {$85}\n\n\n"
		"\t\t\t\t\t\t(3) MEDIANAS{$75}\n\n\n"		
		"\t\t\t\t\t\t(4) CHICAS  {$65}\n\n\n"
		"\t\t\t\t\t\t(5) CONTINUAR...\n\n\n";
	cout<<"\t[Opcion]\n\t ";
		cin>>opsp;
	
	switch(opsp){
		
		case 1:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzPalomitas[0];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzPalomitas[0]+=tiketPzPalomitas[0];
				tiketPesosPalomitas[0]=tiketPzPalomitas[0]*PalpresJum;
				cortePesosPalomitas[0]+=tiketPesosPalomitas[0];
			}else{
				tiketPzPalomitas[0]=0;
				tiketPesosPalomitas[0]=0;
			}
			break;
		}
		case 2:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzPalomitas[1];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzPalomitas[1]+=tiketPzPalomitas[1];
				tiketPesosPalomitas[1]=tiketPzPalomitas[1]*PalpresGd;
				cortePesosPalomitas[1]+=tiketPesosPalomitas[1];
			}else{
				tiketPzPalomitas[1]=0;
				tiketPesosPalomitas[1]=0;
			}
			break;
		}case 3:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzPalomitas[2];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzPalomitas[2]+=tiketPzPalomitas[2];
				tiketPesosPalomitas[2]=tiketPzPalomitas[2]*PalpresMed;
				cortePesosPalomitas[2]+=tiketPesosPalomitas[2];
			}else{
				tiketPzPalomitas[2]=0;
				tiketPesosPalomitas[2]=0;
			}
			break;
		}case 4:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzPalomitas[3];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzPalomitas[3]+=tiketPzPalomitas[3];
				tiketPesosPalomitas[3]=tiketPzPalomitas[3]*PalpresCh;
				cortePesosPalomitas[3]+=tiketPesosPalomitas[3];
			}else{
				tiketPzPalomitas[3]=0;
				tiketPesosPalomitas[3]=0;
			}
			break;
		}
		case 5:{
			
			break;
		}
		default:
			cout<<"\n\t[ingrese una opcion valida]";
			continue;
	}
	}while(opsp!=5);
	
	return;
}

// 0=Jumbo, 1=Grandes, 2=Medianas, 3=chicas;
	int tiketPzRefrescco[4]={0,0,0,0};
	int tiketPesosRefrescco[4]={0,0,0,0};
	int cortePzRefrescco[4]={0,0,0,0};
	int cortePesosRefrescco[4]={0,0,0,0};
	// 0=Jumbo, 1=Grandes, 2=Medianas, 3=chicas;v

//3.2
void refrescos(){
	
	int opsr=0;	
	char conf;
	int rfspresJum=60,rfspresGd=55,rfspresMed=40,rfspresCh=35;
	
	do{
		system("cls");
		
	cout<<"\n\n\n\t\t\t\t\t\tMENU REFRESCO\n\n\n"
		"\t\t\t\t\t\t(1) JUMBO   {$60}\n\n\n"
		"\t\t\t\t\t\t(2) GRANDE  {$55}\n\n\n"
		"\t\t\t\t\t\t(3) MEDIANO {$40}\n\n\n"		
		"\t\t\t\t\t\t(4) CHICO   {$35}\n\n\n"
		"\t\t\t\t\t\t(5) CONTINUAR...\n\n\n";
	cout<<"\t[Opcion]\n\t ";
		cin>>opsr;
	
	switch(opsr){
		
		case 1:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzRefrescco[0];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzRefrescco[0]+=tiketPzRefrescco[0];
				tiketPesosRefrescco[0]=tiketPzRefrescco[0]*rfspresJum;
				cortePesosRefrescco[0]+=tiketPesosRefrescco[0];
			}else{
				tiketPzRefrescco[0]=0;
				tiketPesosRefrescco[0]=0;
			}
			break;
		}
		case 2:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzRefrescco[1];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzRefrescco[1]+=tiketPzRefrescco[1];
				tiketPesosRefrescco[1]=tiketPzRefrescco[1]*rfspresGd;
				cortePesosRefrescco[1]+=tiketPesosRefrescco[1];
			}else{
				tiketPzRefrescco[1]=0;
				tiketPesosRefrescco[1]=0;
			}
			break;
		}case 3:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzRefrescco[2];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzRefrescco[2]+=tiketPzRefrescco[2];
				tiketPesosRefrescco[2]=tiketPzRefrescco[2]*rfspresMed;
				cortePesosRefrescco[2]+=tiketPesosRefrescco[2];
			}else{
				tiketPzRefrescco[2]=0;
				tiketPesosRefrescco[2]=0;
			}
			break;
		}case 4:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzRefrescco[3];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzRefrescco[3]+=tiketPzRefrescco[3];
				tiketPesosRefrescco[3]=tiketPzRefrescco[3]*rfspresCh;
				cortePesosRefrescco[3]+=tiketPesosRefrescco[3];
			}else{
				tiketPzRefrescco[3]=0;
				tiketPesosRefrescco[3]=0;
			}
			break;
		}
		case 5:{
			
			break;
		}
		default:
			cout<<"\n\t[ingrese una opcion valida]";
			continue;
	}
	}while(opsr!=5);
	
	return;
	
}
	int tiketPzDulces[4]={0,0,0,0};
	int tiketPesosDulces[4]={0,0,0,0};
	int cortePzDulces[4]={0,0,0,0};
	int cortePesosDulces[4]={0,0,0,0};

//3.3
void dulces(){
	
	int opsd=0;
	char conf;
	int nachPres=55,gomsPres=45,icePres=55;
	
	do{
		
		system("cls");
		
	cout<<"\n\n\n\t\t\t\t\t\tMENU DULCES\n\n\n"
		"\t\t\t\t\t\t(1) NACHOS   {$55}\n\n\n"
		"\t\t\t\t\t\t(2) GOMITAS  {$45}\n\n\n"
		"\t\t\t\t\t\t(3) ICE      {$55}\n\n\n"		
		"\t\t\t\t\t\t(4) CONTINUAR...\n\n\n";
	cout<<"\t[Opcion]\n\t ";
		cin>>opsd;
	
	switch(opsd){
		
		case 1:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzDulces[0];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzDulces[0]+=tiketPzDulces[0];
				tiketPesosDulces[0]=tiketPzDulces[0]*nachPres;
				cortePesosDulces[0]+=tiketPesosDulces[0];
			}else{
				tiketPzDulces[0]=0;
				tiketPesosDulces[0]=0;
			}
			break;
		}
		case 2:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzDulces[1];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzDulces[1]+=tiketPzDulces[1];
				tiketPesosDulces[1]=tiketPzDulces[1]*nachPres;
				cortePesosDulces[1]+=tiketPesosDulces[1];
			}else{
				tiketPzDulces[1]=0;
				tiketPesosDulces[1]=0;
			}
			break;
		}
		case 3:{
			cout<<"\n\t[Cuantas piesas desea comprar]\n\t";
			cin>>tiketPzDulces[2];
			
			
			cout<<"\n\t[Confirmar compra s(Si)/n(No)]\n\t";
			cin>>conf;
			while(conf!='s'&&conf!='S'&&conf!='n'&&conf!='N'){
				cout<<"\n\t[Debera ingresar una opcion valida]\n\t";
				cin>>conf;
			}
			if(conf=='S'||conf=='s'){
				
				cortePzDulces[2]+=tiketPzDulces[2];
				tiketPesosDulces[2]=tiketPzDulces[2]*nachPres;
				cortePesosDulces[2]+=tiketPesosDulces[2];
			}else{
				tiketPzDulces[2]=0;
				tiketPesosDulces[2]=0;
			}
			break;
		}
		case 4:{
			break;
		}
		default: 
			cout<<"[Ingrse una  opcion valida]";
			break;
	}
	
	}while(opsd!=4);
	
		return;
}


//4
//IMPRIMIR TIKET
void tiket(){
	system("cls");
	system("color 08");
	
	int i=0;
	string tamano[4]={"jumbo","grandes","medianas","chicas"};
	string altura[4]={"jumbo","grande","mediano","chico"};
	
	cout<<"\n\n\n\tvoletos de la compra  "<<tiketReservados<<endl<<endl;
	cout<<"\n\tA pagar de los boletos "<<tiketTotBol<<endl<<endl;
	cout<<"\n\tvoletos Cancelados  "<<tiketCancelados<<endl<<endl;
	cout<<"\n\treembolso "<<reembolso<<endl<<endl;
		int totalPagar=tiketTotBol-reembolso;
	cout<<"\n\ttotal a pagar "<<totalPagar<<endl<<endl;
	
	for(i=0;i<5;i++){
		
		if(tiketPzPalomitas[i]>0){
			
			cout<<"\n\t"<<tiketPzPalomitas[i]<<".00 Palomitas "<<tamano[i]<<" $"<<tiketPesosPalomitas[i];
		}
		if(tiketPzRefrescco[i]>0){
			
			cout<<"\n\t"<<tiketPzRefrescco[i]<<".00 Refrescco "<<altura[i]<<" $"<<tiketPesosRefrescco[i];
		}
		if(tiketPzDulces[i]>0){
			
			cout<<"\n\t"<<tiketPzDulces[i]<<".00 dulceria "<<" $"<<tiketPesosDulces[i];
		}
		
	}
	
	cout<<"\n\n\n";
	
	system("pause");
	
	return;
}
  
//5
//FIN DE UNA COMPRA
void finCompra(){
	tiketReservados=0;
	tiketCancelados=0;
	tiketTotBol=0;
	tiketCancelados=0;
	reembolso=0;
	for(int i=0;i<5;i++){
	tiketPzPalomitas[i]=0;
	tiketPesosPalomitas[i]=0;
	tiketPzRefrescco[i]=0;
	tiketPesosRefrescco[i]=0;
	tiketPzDulces[i]=0;
	tiketPesosDulces[i]=0;
	}
	
	cin.get();
	return;
}
