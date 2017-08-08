package lexical;

import java.io.FileInputStream;
import java.io.PushbackInputStream;

public class LexicalAnalysis implements AutoCloseable {

    private int line;
    private SymbolTable st;
    private PushbackInputStream input;

    public LexicalAnalysis(String filename) throws LexicalException {
        try {
            input = new PushbackInputStream(new FileInputStream(filename));
        } catch (Exception e) {
            throw new LexicalException("Unable to open file");
        }

        st = new SymbolTable();
        line = 1;
    }

    public void close() throws Exception {
        input.close();
    }

    public int line() {
        return this.line;
    }

    public Lexeme nextToken() {
         Lexeme lex = new Lexeme("", TokenType.END_OF_FILE);

         // TODO: implement me.

         // HINT: read a char.
         // int c = input.read();

         // HINT: unread a char.
         // if (c != -1)
         //     input.unread(c);

         return lex;
    }
}