int main()
{
	int n = 102300, p, k;
	p = n / 100000 + ((n % 100000) / 100000) + ((n % 100000) / 1000)
	k =(( n % 1000) / 100 + (( n % 100) / 10) + ((n % 10) / 1);
	if(p==k){
		return 1;
	   }else{
	   	return 0;
	   }
}
