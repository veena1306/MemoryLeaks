int main()
{
	int* ptr = static_cast<int*>(calloc(1,sizeof(int)));
	*ptr = 7;
	cout << *ptr << endl;
}
