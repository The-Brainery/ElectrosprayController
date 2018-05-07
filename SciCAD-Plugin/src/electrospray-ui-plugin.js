class ElectrosprayUIPlugin extends UIPlugin {
  constructor(elem, focusTracker, ...args) {
    super(elem, focusTracker, ...args);
    this.element.appendChild(yo`
      <div>Implement Me</div>
    `);
  }
}

module.exports = ElectrosprayControllerUIPlugin;
