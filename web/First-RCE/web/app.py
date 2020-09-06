from flask import Flask, request, render_template_string

app = Flask(__name__)

@app.route('/')
def index():
    return 'Welcome!'

@app.errorhandler(404)
def page_not_found(e):
    template = '<h1>404 Page Not found</h1>\n<hr>\n'+request.path+' is not found on server'
    return render_template_string(template), 404

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)