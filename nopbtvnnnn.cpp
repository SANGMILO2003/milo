bai1 
#include <iostream> 
using  namespace  std ; 
class  songuyen { 
	public : 
	int  a [ 100 ]; 
	int  n , m ; 
	void  nhap () { 
	cout << "Nhap so luong phan tu mang:" ; 
	cin >> n ; 
	for ( int  i  =  0  ;  i  <  n  ;  i ++ ) { 
     cout << "a [" << i <<"] =" ; 
     cin >> a [ i ]; 
		} 
	} 
	void  xuat () { 
		cout << "Hien thi mang:" << endl ; 
	for ( int  i  =  0  ;  i  <  n  ;  i ++ ) { 
	cout << "a [" << i << "] =" ; 
	   cout << a [ i ] << endl ;	
	
	
	 
		cout << " \ n Mang sau khi bi dao nguoc:" << endl ; 
		for ( int  i  =  n  - 1  ;  i  > =  0  ;  i - ) { 
			// cout << "a [" << i << "] ="; 
			cout << a [ i ] << endl ; 
			} 
			} 
	void  tim () { 
		cout << "Nhap so can tim trong mang:" << endl ; cin >> m ;
		 i =  0  ;  i  <  n  ; i ++ ) { 
		if ( a [ i ] == m ) { 
		cout << "a [" << i << "] =" ; 
		cout << a [ i ] << "la so ban can tim trong mang!" << endl ;} 
	} 
	} 
	void  sapxep () { 
	cout << " \ n Sap xep theo thu tu tang dan:" ;
	 i = 0 ; i < n ; i ++ ) { 
		for ( int  j = i + 1 ; j < n ; j ++ ) { 
		if ( a [ i ] > a [ j ]) 
		swap ( a [ i ], a [ j ]); 
        	} 
      cout << a [ i ] << "" ;    
	  }
	  cout << endl ; 
	 } 
}; 
int  main () { 
	songuyen  s1 ; 
	s1 . nhap (); 
	s1 . xuat (); 
	s1 . nguoc (); 
	s1 . tim (); 
	s1 . sapxep (); 
} 
bai2 
#include <iostream> 
using  namespace  std ; 	
class  sophuc { 
	public : 
	int  pt [ 3 ], pa [ 3 ];
void  nhap () { 
	for ( int  i = 0 ; i < 2 ; i ++ ) { 
	cout << " \ n nhap vao phan thuc so phuc thu" << i + 1 << ":" ; 
	cin >> pt [ i ]; 
	cout << " \ n nhap vao phan ao so phuc" << i + 1 << ":" ; 
	cin >> pa [ i ]; 
	}
} 
void  xuat () { 
	for ( int  i = 0 ; i < 2 ; i ++ ) { 
	cout << "so phuc thu" << i + 1 << "la:" ; 
     cout << pt [ i ] << "+" << pa [ i ] << "j \ n " ; 
     } 
   } 
 void  tonghieu () { 
 	cout << "tong cua 2 so phuc la: " << pt [ 0 ] + pt [ 1 ] << " + " << pa [ 0 ] + pa [ 1 ] << " j " ; 
 	cout << " \ n hieu cua 2 so phuc la: " << pt [ 0 ] - pt [ 1 ] << " + " << pa [ 0 ] - pa [ 1 ] << "j"; 
 } 
}; 	
int  main () { 
   sophuc  s1 ; 
   s1 . nhap (); 
   s1 . xuat (); 
   s1 . tonghieu (); 
} 
bai3 
#include <iostream> 
using  namespace  std ; 
l?p  phanso { 
public : 
	int  ts ; 
	int  ms ; 
 void  nhap () { 
	int  n ; 
	cout << "nhap n:" ; 
	cin >> n ;
for  ( int  i = 0 ; i < n ; i ++ ) { 
	cout << "nhap tu so thu" << i + 1 << ":" ; 
	cin >> ts ; 
	cout << "nhap mau so thu" << i + 1 << ":" ; 
	cin >> ms ; 
		   } 
	  } 
}; 
int  main () { 
	phanso  ps ; 
	ps .					
	cout << "tong cac phan so la:" << ps . ts * ps . ms + ps . ts * ps . ms << "/" << ps . ms * ps . c� g�i ; 
} 
bai  4
