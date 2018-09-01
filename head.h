#ifndef __HEAD_H
#define __HEAD_H
int yearToDays(int i){
	int y = i;
	int ruiYear = 0;
	int days = 0;
	int n = 20;
	if( y - 2010 == 0 )
		return 0;
	if( y - 2012 >= 0 ){
		ruiYear = ( y - 2012 ) / 4;	
	}
	days = ( i - 2010 ) * 365 + ruiYear;
	for(;n < y / 100;n++  ){
		if( n % 4 == 0 )
			days--;
	}
	return days;
}

int monthToDays( int m,int y ){
	int days = 0;
	int x = 0;
	if( ( y % 100 !=0 && y % 4 == 0 ) || ( y % 400 == 0 ) )
		x = 1;
	switch( m ){
		case 1: days = 0;
			break;
		case 2: days = 31;
			break;
		case 3: days = 59; 
			break;
		case 4: days = 90 ;
			break;
		case 5: days = 120 ;
			break;
		case 6: days = 151;
			break;
		case 7: days = 181;
			break;
		case 8: days = 212;
			break;
		case 9: days = 243;
			break;
		case 10: days =273;
			break;
		case 11: days = 304;
			break;
		case 12: days = 334;
			break;
	}	
	if( m >= 3 )
		days += x;
		return days;
}

char *  fish( int days ){
	int n = days % 5;
        char * dayu = "dayu";
        char * xiawa = "xiawa";
	char * r = NULL;	
	switch(n){
		case 1:
		case 2:
		case 3: printf( "dayu" );
			r = dayu;
			break;
		case 4:
		case 0: printf( "xiawa" );
			r = xiawa;
			break;
	}
	return r;
}




#endif
