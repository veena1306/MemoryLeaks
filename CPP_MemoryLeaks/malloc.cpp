
int main()
{
	int* ptr = static_cast<int*>(malloc(sizeof(int)));
	*ptr = 7;
	cout << *ptr << endl;
}
