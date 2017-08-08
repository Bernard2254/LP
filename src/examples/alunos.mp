# Criar um dicionário vazio de notas de alunos
%alunos = {}

# Colocar os alunos no dicionário.
do {
    $nome = input "Entre com o nome: ";
    %alunos{$nome} = input "Entre com a nota de " . $nome . ": " if (!empty $nome);
} while (!empty $nome);

# Obter a lista de nomes de alunos.
@nomes = keys %alunos;

# Imprimir a quantidade de alunos
println "Foram " . size @nomes . " aluno(s) matriculado(s):";

# Percorrer cada aluno da lista em ordem alfabética.
foreach $a (sort @nomes) {
    # Imprimir o nome do aluno
    print " " . $a . ":";

    # Mostrar se aprovados ou se reprovados com seus conceitos.
    $c = %alunos{$a};
    if ($c >= 60) {
        print "aprovado(a) - ";
        println "A" if $c >= 90;
        println "B" if $c >= 80 and $a < 90;
        println "C" if $c >= 70 and $a < 80;
        println "D" if $c < 70;
    } else {
        println "reprovado(a) - E";
    }
}
