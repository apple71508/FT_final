class Packet{
public:
	void Packet(int dest, int source){
		_dest = dest;
		_source = source;
	}
	int getDest(){return _dest;}
	int getSource(){return _source;}

private:
	int _dest;
	int _source;
};


