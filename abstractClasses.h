class Book{
	protected:
		string title;
		string author;
	public:
		Book(string t,string a){
			title=t;
			author=a;
		}
		virtual void display()=0;
};
class MyBook : Book
{
	public:
		MyBook(
		string t,
		string a,
		int p) : Book(t,a),price(p)
		{
			
		}
		virtual void display(void) override{
			cout<<"Title"<<title<<endl;
			cout<<"Author"<<author<<endl;
			cout<<"Price"<<price<<endl;
		}
		private:
		int price;
};
int main()
{
	string title,author;
	int price;
	getline(cin,title);
	getline(cin,author);
	cin>>price;
	MyBook novel(title,author,price);
	novel.display();
	return 0;
}