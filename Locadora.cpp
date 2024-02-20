#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Definicao da classe "funcionario"
class funcionario
{
    string nome;
    int codigo;
    string contato;

public:
    funcionario() : codigo(0) {}

    // Construtor da classe com parametros
    funcionario(const string &n, int cod, const string &cont) : codigo(cod)
    {
        contato = cont;
        nome = n;
    }

    // Metodos para definir e obter o nome
    void set_nome(const string &n)
    {
        nome = n;
    }
    string get_nome()
    {
        return nome;
    }

    // Metodos para definir e obter o codigo
    void set_codigo(int cod)
    {
        codigo = cod;
    }
    int get_codigo()
    {
        return codigo;
    }

    // Metodos para definir e obter o contato
    void set_contato(const string &cont)
    {
        contato = cont;
    }
    string get_contato()
    {
        return contato;
    }

    // Metodo para exibir informacoes do funcionario
    void informacao_funcionario()
    {
        cout << endl << "Informacao do funcionario: " << endl;
        cout << "Nome: " << nome << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "Contato: " << contato << endl;
    }
};

// Definicao da classe "cliente"
class cliente
{
    string nome;
    string endereco;
    int idade;
    string contato;
    string cpf;
    string Codigo_CNH;

public:
    cliente() : idade(0) {}

    // Construtor da classe com parametros
    cliente(const string &n, const string &end, const string &cont, int id, const string &cp, const string &cnh) : idade(id)
    {
        cpf = cp;
        Codigo_CNH = cnh;
        contato = cont;
        nome = n;
        endereco = end;
    }

    // Metodos para definir e obter o nome
    void set_nome(const string &n)
    {
        nome = n;
    }
    string get_nome()
    {
        return nome;
    }

    // Metodos para definir e obter o endereco
    void set_endereco(const string &end)
    {
        endereco = end;
    }
    string get_endereco()
    {
        return endereco;
    }

    // Metodos para definir e obter a idade
    void set_idade(int id)
    {
        idade = id;
    }
    int get_idade()
    {
        return idade;
    }

    // Metodos para definir e obter o contato
    void set_contato(const string &cont)
    {
        contato = cont;
    }
    string get_contato()
    {
        return contato;
    }

    // Metodos para definir e obter o CPF
    void set_cpf(const string &cp)
    {
        cpf = cp;
    }
    string get_cpf()
    {
        return cpf;
    }

    // Metodos para definir e obter o código CNH
    void set_codigo_CNH(const string &cnh)
    {
        Codigo_CNH = cnh;
    }
    string get_codigo_CNH()
    {
        return Codigo_CNH;
    }

    // Metodo para exibir informacoes do cliente
    void informacao_cliente()
    {
        cout << endl
             << "Informacao do cliente: " << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Endereco: " << endereco << endl;
        cout << "Codigo CNH: " << Codigo_CNH << endl;
        cout << "Contato: " << contato << endl;
    }
};

// Definicao da classe "veiculo"
class veiculo
{
    
    string marca;
    string placacarro;
    string tipocombustivel;
    int anocarro;
    string modelo;
    double preco_por_dia;
    int codigo;

public:
    veiculo() : anocarro(0), preco_por_dia(0.0) {}

    // Construtor da classe com parametros
    veiculo(const string &placa, const string &marc, const string &mod, int ano, const string &combustivel, double preco, int cod)
    {
        tipocombustivel = combustivel;
        placacarro = placa;
        marca = marc;
        anocarro = ano;
        modelo = mod;
        preco_por_dia = preco;
        codigo = cod;
    }

    // Metodos para definir e obter a placa
    void set_placa(const string &placa)
    {
        placacarro = placa;
    }
    string get_placa()
    {
        return placacarro;
    }

    // Metodos para definir e obter o combustivel
    void set_combustivel(const string &combustivel)
    {
        tipocombustivel = combustivel;
    }
    string get_combustivel()
    {
        return tipocombustivel;
    }

    // Metodos para definir e obter o codigo
    void set_codigo(int cod)
    {
        codigo = cod;
    }
    int get_codigo()
    {
        return codigo;
    }

    // Metodos para definir e obter a marca
    void set_marca(const string &marc)
    {
        marca = marc;
    }
    string get_marca()
    {
        return marca;
    }

    // Metodos para definir e obter o ano do carro
    void set_anocarro(int ano)
    {
        anocarro = ano;
    }
    int get_anocarro()
    {
        return anocarro;
    }

    // Metodos para definir e obter o modelo
    void set_modelo(const string &mod)
    {
        modelo = mod;
    }
    string get_modelo()
    {
        return modelo;
    }

    // Metodos para definir e obter o preco por dia
    void set_preco(double preco)
    {
        preco_por_dia = preco;
    }
    double get_preco()
    {
        return preco_por_dia;
    }

    // Metodo para exibir informcoes do carro
    void informacao_carro()
    {
        cout << endl
             << "Informacao do automovel: " << endl;
        cout << "Placa: " << placacarro << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << anocarro << endl;
        cout << "Codigo do veiculo: " << codigo << endl;
        cout << "Tipo do combustivel: " << tipocombustivel << endl;
        cout << "Preco diario: " << preco_por_dia << endl;
    }
};

// Definicao da classe "locacao"
class locacao
{
    funcionario *funcio;
    cliente *pessoa;
    veiculo *automovel;
    int qtd_de_dias;
    double valor;

public:
    // Construtor da classe com parametros
    locacao(funcionario *atendente, cliente *individuo, veiculo *transporte, int dias)
    {
        funcio = atendente;
        pessoa = individuo;
        automovel = transporte;
        qtd_de_dias = dias;
        valor = qtd_de_dias * automovel->get_preco();
    }

    // Metodos para definir e obter o funcionario
    void set_funcionario(funcionario *func)
    {
        funcio = func;
    }
    funcionario *get_fucnionario()
    {
        return funcio;
    }

    // Metodos para definir e obter o veiculo
    void set_veiculo(veiculo *vec)
    {
        automovel = vec;
    }
    veiculo *get_veiculo()
    {
        return automovel;
    }

    // Metodos para definir e obter o cliente
    void set_cliente(cliente *p)
    {
        pessoa = p;
    }
    cliente *get_cliente()
    {
        return pessoa;
    }

    // Metodos para definir e obter a quantidade de dias
    void set_dias(int dias)
    {
        qtd_de_dias = dias;
    }
    int get_dias()
    {
        return qtd_de_dias;
    }

    // Metodos para calcular e obter o preco total
    void set_precototal()
    {
        valor = qtd_de_dias * automovel->get_preco();
    }
    double get_precototal()
    {
        return valor;
    }

    // Metodo para exibir informcoes da locacao
    void informacao_locacao()
    {
        cout << endl
             << "Informacao da locacao:" << endl;
        cout << "Cliente: " << pessoa->get_nome() << endl;
        cout << "Funcionario: " << funcio->get_nome() << endl;
        cout << "Carro da marca: " << automovel->get_marca() << ", modelo: " << automovel->get_modelo() << ", ano: " << automovel->get_anocarro() << endl;
        cout << "Preco final: " << get_precototal() << endl;
    }
};

// Funcao principal
int main()
{
    // Criando funcionários
    funcionario func1("Joao Silva", 101, "joao@empresa.com");
    funcionario func2("Maria Oliveira", 102, "maria@empresa.com");
    funcionario func3("Pedro Santos", 103, "pedro@empresa.com");

    // Criando clientes
    cliente cliente1("Ana Souza", "Rua A, 123", "ana@gmail.com", 25, "123.456.789-01", "CNH12345");
    cliente cliente2("Carlos Lima", "Rua B, 456", "carlos@hotmail.com", 30, "987.654.321-09", "CNH67890");
    cliente cliente3("Lucia Pereira", "Rua C, 789", "lucia@yahoo.com", 22, "456.789.012-34", "CNH54321");

    // Criando veículos
    veiculo carro1("ABC1234", "Chevrolet", "Onix", 2022, "Gasolina", 120.0, 201);
    veiculo carro2("XYZ5678", "Ford", "Fiesta", 2021, "Etanol", 100.0, 202);
    veiculo carro3("DEF9876", "Volkswagen", "Gol", 2023, "Flex", 150.0, 203);

    // Criando locações
    locacao locacao1(&func1, &cliente1, &carro1, 5);
    locacao locacao2(&func2, &cliente2, &carro2, 3);
    locacao locacao3(&func3, &cliente3, &carro3, 7);

    // Exibindo informações
    func1.informacao_funcionario();
    func2.informacao_funcionario();
    func3.informacao_funcionario();

    cliente1.informacao_cliente();
    cliente2.informacao_cliente();
    cliente3.informacao_cliente();

    carro1.informacao_carro();
    carro2.informacao_carro();
    carro3.informacao_carro();

    locacao1.informacao_locacao();
    locacao2.informacao_locacao();
    locacao3.informacao_locacao();

    return 0;
}
