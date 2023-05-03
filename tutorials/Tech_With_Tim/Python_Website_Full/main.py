# __init__.py makes website directory into a package
from website import create_app

app = create_app()

if __name__ == '__main__':
    app.run(debug=True)  # debug=True reruns file whenever changes are made
