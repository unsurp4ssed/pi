import sys
sys.setrecursionlimit(1000001)


def calcPI(n):
	if n == 1:
		return 4
	return 4 * (-1)**(n+1) * (1/(2*n-1)) + calcPI(n-1)

def main():
	try:
		n = sys.argv[1]
	except IndexError:
		n = ''
	help = ['h', '-h', '-help', '--help', '']
	if (n in help) or (int(n)<=0): 
		print('This program calculates PI in [n] iterations.\nn has to be not more than 1.000.000\nUsage: py pi.py [n]');
		sys.exit(0);	

	print('calcuating pi...');
	pi = calcPI(int(n));
	print('...done.')
	print('PI is approx.:', pi)

if __name__ == "__main__": 
	main()