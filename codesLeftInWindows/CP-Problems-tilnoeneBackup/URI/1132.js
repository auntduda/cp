var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

int x = int.Parse(System.Console.ReadLine().Trim()), y = int.Parse(System.Console.ReadLine().Trim());

if(x>y){
	int temp=x;
	x=y;
	y=temp;
}
int soma=0;
for(int i=x;i<=y;i++){
	if(i%13!=0){
		soma+=i;
	}
}
Console.Write("{0}\n", soma);