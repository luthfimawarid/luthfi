#include <iostream>
#include <windows.h>
#include<bits/stdc++.h>
using namespace std;


struct food{
	string jenis;
	string makan[40];
	int harga[40];
	string negara[40];
	int kalori[40];
	string beratb[40];
};

int main(){
	string p,r;
	int jm,banyak,q;
	int harga,jumlah[106],jumlah1[106];
	int a=-1,total=0,total1=0;
	string data[106];
	
	food jh[5]={"Appetizer","Main course","Dessert","Drink","Side dish"}
	
	food info[5]={{"Apettizer",{"bakwan","mendoan","batagor","risoles","martabak telor","lumpia","serabi","pastel","siomay","bakpao","cireng","gyoza","edamame","canape","bruschetta",
    },{5000,2000,10000,3000,18000,2000,29000,5000,10000,5000,1000,23000,18000,20000,25000}},
	{"local","local","local","local","local","local","local","china","india","tiongkok","tiongkok","france","italy",}},
	{300,160,320,200,350,200,200,300,300,190,200,300,150,200,300}},
    
	{"Maincourse",{"nasgor","ketoprak","gado-gado","rendang","pecel lele","pecel ayam","pecel bebek","mie goreng","nasi padang","mie ayam","bakso","sate ayam","sate kambing","ikan bakar","ayam bakar","ayam goreng","ikan goreng","nasgor omelet","sushi",
                   "tempura","ramen","udon","onigiri","curry rice","bibimbap","japchae","ramyeon","jjajangmyon","bulgogi","pizza","spaghetti","seblak","ayam geprek","kentukcy","steak","ayam teriyaki",
    },{17000,10000,15000,22000,16000,20000,23000,10000,13000,11000,10000,10000,10000,55000,22000,15000,18000,25000,13000,18000,23000,66000,10000,9000,88000,33000,40000,40000,42000,250000,19000,29000,15000,25000,300000,41000},
	{"local","local","local","local","local","local","local","local","local","local","local","local","local","local","local","local","local","japan",
					"japan","portugal","japan","japan","japan","india","korea","korea","korea","korea","korea","italy","italy","local","local","america","spain","japan",},
					{250,400,400,450,300,300,300,400,650,350,250,350,320,190,100,250,210,212,180,350,500,470,210,300,600,300,500,520,250,550,220,300,300,150,250,450}},
	
	{"Dessert",{"martabak manis","pukis","pisang goreng","kue lapis","lapis legit","nagasari","klepon","bika ambon","cheesecake","dorayaki","ice cream","puding cake","waffle","egg tart","dadar gulung","mochi",
	            "apple pie","churros","tiramisu","donat","jasuke",
	},{15000,5000,10000,30000,30000,5000,8000,30000,20000,10000,15000,150000,50000,25000,20000,25000,35000,20000,50000,35000,15000,},
	{"local","local","local","local","local","local","local","local","yunani","japan","universal","france","belgia","portugal","local","local","inggris","philippines","italy","america","local"},
	{270,150,250,160,180,150,110,180,240,170,260,150,250,220,300,180,400,120,450,750,300}},
	
	{"Drink",{"americano","apple juice","avocado juice","beer","black tea","carbonated drink","carrot juice","chocolatte milk","milk coffe","espresso","green tea","hot chocolatte","wedang jahe","ice tea","coffe latte",
		      "lemon tea","lemonade","milk tea","milkshake","oat millk","soda","wine","strawberry juice","cendol","orange juice",
	},{25000,15000,15000,70000,20000,10000,15000,15000,20000,25000,30000,13000,15000,10000,15000,13000,13000,15000,18000,20000,10000,80000,15000,20000,15000},
	{"america","universal","universal","universal","china","universal","universal","universal","italy","china","universal","local","universal","italy","mesir","universal","universal",
				"australia","universal","france","universal","local","universal",},
				{15,80,150,155,60,140,94,150,160,5,150,150,110,70,190,25,20,150,250,350,60,150,200,40,120}},
   
   {"Side Dish",{"krupuk kulit","french fries","mashed potatoes","pottatoes chips","perkedel","tamagoyaki","kimchi","nori","takoyaki"
	},{5000,8000,25000,10000,13000,15000,15000,15000,20000,},
	{"local","belgia","universal","universal","local","japan","korea","japan","japan",},{500,200,400,150,110,60,150,40}}
	
	
	
	};
	balik:
   cout<< "         Restoran Acumalaka"<<endl;
   cout<< "------------------------------------"<<endl;
   	cout << "------------------------" <<endl;
	cout << "1. Appetizer\t\t|" <<endl;
	cout << "2. Main Course\t\t|" <<endl;
	cout << "3. Dessert      \t|" <<endl;
	cout << "4. Drink \t\t|" <<endl;
	cout << "5. Side Dish      \t|" <<endl;
	cout << "------------------------" <<endl;
    cout<<"Pilih Jenis Hidangan = "; cin>>p;cout<<endl;
   
	transform(p.begin(), p.end(), p.begin(), :: tolower);
	if(p=="1" || p=="appetizer"|| p=="Appetizer"){
		jm=0;
		banyak=15;
	}
	else if(p=="2"||p=="main Courser"||p=="Main Courser"){
		jm=1;
		banyak=37;
	}
	else if(p=="3"||p=="dessert"||p=="Dessert"){
		jm=2;
		banyak=21;
	}
	else if(p=="4"||p=="drink"||p=="Drink"){
		jm=3;
		banyak=25;
	}
	else if(p=="5"||p=="side dish"||p=="Side dish"){
		jm=4;
		banyak=8;
	}
	else{
		system("cls");
		goto balik;
	}balik1:
        cout << "-------------------------------"<<endl;
         for (int j=0; j<banyak; j++){                  
        	if(jm==3){
        		cout <<j+1<<". | minuman : " << info[jm].makan[j];
            cout << " Harga : " << info[jm].harga[j] <<endl;
			}else{		
            cout <<j+1<<". | makanan : " << info[jm].makan[j]
			<<"  "<<info[jm].kalori[j]<<" kkl"<< endl;
            cout << " Harga : " << info[jm].harga[j] <<endl;
        }
        }a++;
        cout<<"Pilih Menu = ";cin>>q;
        cout<<info[jm].makan[q-1]<<endl;
        data[a]=info[jm].makan[q-1];
        cout<<"Jumlah = ";cin>>jumlah[a];cout<<endl;
        total += info[jm].harga[q-1] * jumlah[a];
        total1 += info[jm].kalori[q-1]*jumlah[a];
        cout<<"Pilih Menu lain? = "; cin>>r;
        if(r=="ya"||r=="iya"||r=="y"||r=="Y"||r=="IYA"||r=="YA"){
        	goto balik1;
        	system("cls");
	}else{
		system("cls");
		goto lanjut;
	}
	lanjut:
		cout<<"Pilih Jenis hidangan lain? = "; cin>>r;
        if(r=="ya"||r=="iya"||r=="y"||r=="Y"||r=="IYA"||r=="YA"){
        	goto balik;
	}else{
		system("cls");
		goto akhir;
	}akhir:cout << "\tStruct Pesanan" <<endl;
		cout << "-----------------------------" <<endl<<endl;
		for (int w=0; w<=a; w++){
			cout << w+1 <<". "<<data[w] <<"    x"<<jumlah[w]<<"  "
			<<total1<<" kkl"<<endl;
		}
		cout << endl << "-----------------------------" <<endl;
		cout << "Harga Pesanan : " << total;
	return 0;
        }
                

